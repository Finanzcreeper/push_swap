/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 20:38:10 by nreher            #+#    #+#             */
/*   Updated: 2023/02/02 20:34:41 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_has_nl(const char *s)
{
	int	c;

	c = 0;
	while (s[c])
	{
		if (s[c] == '\n')
			return (1);
		c++;
	}
	return (0);
}

char	*get_next_line(int fd)
{
	char		*out;
	char		**temps;
	static char	*rest;
	int			r;

	temps = ft_calloc(5, sizeof(char *));
	out = ft_renul(&rest, temps, ft_calloc(1, sizeof(char)));
	while (rest == NULL)
	{
		free(temps[4]);
		temps[4] = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
		r = read(fd, temps[4], BUFFER_SIZE);
		if (r <= 0)
		{
			ft_fremp(temps);
			if (out[0] != '\0')
				return (out);
			free(out);
			return (0);
		}
		out = ft_loopend(temps, &rest, out);
	}
	ft_fremp(temps);
	return (out);
}

void	ft_fremp(char **temps)
{
	free(temps[4]);
	free(temps);
}

char	*ft_loopend(char **temps, char **rest, char *out)
{
	temps[0] = ft_strbnl(temps[4]);
	*rest = ft_stranl(temps[4]);
	temps[1] = out;
	out = ft_strjoin(out, temps[0]);
	free(temps[1]);
	free(temps[0]);
	return (out);
}

char	*ft_renul(char **rest, char **temps, char *out)
{
	if (*rest != NULL)
	{
		temps[1] = out;
		temps[2] = ft_strbnl(*rest);
		out = ft_strjoin(out, temps[2]);
		free(temps[1]);
		free(temps[2]);
		temps[1] = *rest;
		*rest = ft_stranl(temps[1]);
		free(temps[1]);
	}
	return (out);
}
