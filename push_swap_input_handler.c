/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_input_handler.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:14:54 by nreher            #+#    #+#             */
/*   Updated: 2023/02/09 10:10:58 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdio.h>

int	*handler(int argc, char *argv[],int *err)
{
	int			c;
	long int	out;
	int			*a;

	a = ft_calloc(argc - 1, sizeof(int));
	c = 1;
	while (c < argc)
	{
		*err += non_int_handler(argv[c]);
		out = 0;
		*err += char_to_int(argv[c], &out);
		a[c - 1] = out;
		c++;
	}
	*err += duplicate_finder(a, argc);
	return (a);
}

int	non_int_handler(char *input)
{
	int		c;
	char	*use;

	c = 0;
	if (input[0] == '-' || input[0] == '+')
		use = &input[1];
	else
		use = input;
	if (use[0] == '\0')
		return (1);
	while (c < ft_strlen(use))
	{
		if (ft_isdigit(use[c]) == 0)
			return (1);
		c++;
	}
	return (0);
}

int	char_to_int(char *input, long int *out)
{
	int	c;
	int	rev;

	c = 0;
	rev = 0;
	if (input[0] == '-')
	{
		c = 1;
		rev = 1;
	}
	else if (input[0] == '+')
		c = 1;
	while (c < ft_strlen(input))
	{
		*out += input[c] - '0';
		c++;
		if (input[c] == '\0')
			break ;
		*out *= 10;
	}
	if (rev == 1)
		*out *= -1;
	if (ft_strlen(input) > 10 || *out < -2147483648 || *out > 2147483647)
		return (1);
	return (0);
}

int	duplicate_finder(int *a, int argc)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (c < argc - 1)
	{
		i = c + 1;
		while (i < argc - 1)
		{
			if (a[c] == a[i])
			{
				return (1);
			}
			i++;
		}
		c++;
	}
	return (0);
}