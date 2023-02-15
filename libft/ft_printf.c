/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 18:37:04 by nreher            #+#    #+#             */
/*   Updated: 2023/02/14 15:28:57 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_printf(const char *input, ...)
{
	va_list	args;
	int		c;
	int		out;

	out = 0;
	va_start(args, input);
	c = 0;
	if (!input)
		return (-1);
	while (input[c])
	{
		if (input[c] == '%')
		{
			out = ft_decide(args, input[c + 1], out);
			c += 2;
		}
		else
		{
			write(1, &input[c], 1);
			c++;
			out++;
		}
	}
	return (out);
}

int	ft_decide(va_list args, char c, int out)
{
	if (c == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
		out++;
	}
	else if (c == 's')
		out += ft_putnstr_fd(va_arg(args, char *));
	else if (c == 'p')
		out += pointer_maker(va_arg(args, unsigned long), c, 0);
	else if (c == 'd' || c == 'i')
		out += ft_putnnbr_fd(va_arg(args, int), 0);
	else if (c == 'u')
		out += ft_putunbr_fd(va_arg(args, unsigned int), 0);
	else if (c == 'x' || c == 'X')
		out += ft_writehex(va_arg(args, unsigned int), c, 0);
	else if (c == '%')
	{
		write(1, "%", 1);
		out++;
	}
	else
	{
		join(c, &out);
	}
	return (out);
}

void	join(char c, int *out)
{
	char	*o;

	o = ft_calloc(3, sizeof(char));
	o[0] = '%';
	o[1] = c;
	write(1, o, 2);
	*out += 2;
	free(o);
}

int	pointer_maker(unsigned long i, char c, int d)
{
	int	out;

	out = 0;
	if (i == 0)
	{
		write(1, "(nil)", 5);
		out = 5;
		return (out);
	}
	else
	{
		write(1, "0x", 2);
		out = 2 + ft_writehex(i, c, d);
	}
	return (out);
}
