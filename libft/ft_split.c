/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:21:52 by nreher            #+#    #+#             */
/*   Updated: 2023/01/03 17:23:30 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_splitter(char *mod, char **out, char *delim)
{
	unsigned int		c;
	int					i;
	int					l;
	char				*tmp;

	c = 0;
	i = 0;
	while (mod[c])
	{
		tmp = mod;
		mod = ft_strtrim(mod, delim);
		free(tmp);
		l = ft_strlen(mod);
		while (mod[c] != delim[0] && mod[c])
			c++;
		out[i] = ft_substr(mod, 0, c);
		i++;
		tmp = mod;
		mod = ft_substr(mod, c, l);
		free(tmp);
		c = 0;
	}
	free(mod);
	return (out);
}

static int	ft_lencnt(char *mod, char delimiter)
{
	unsigned int		c;
	int					l;

	c = 0;
	l = 0;
	while (mod[c])
	{
		while (mod[c] == delimiter && mod[c])
			c++;
		l++;
		while (mod[c] != delimiter && mod[c])
			c++;
	}
	return (l);
}

char	**ft_split(char const *a1, char delimiter)
{
	int					l;
	char				*mod;
	char				**out;
	char				delim[2];

	if (a1 == NULL)
		return (NULL);
	delim[0] = delimiter;
	delim[1] = '\0';
	mod = ft_strtrim((char *)a1, delim);
	if (a1[0] == '\0' || !mod)
	{
		free(mod);
		out = malloc(1 * sizeof(char *));
		if (!out)
			return (NULL);
		out[0] = NULL;
		return (out);
	}
	l = ft_lencnt(mod, delimiter);
	out = ft_calloc((l + 1), sizeof(char *));
	if (out == NULL)
		return (NULL);
	ft_splitter(mod, out, delim);
	return (out);
}
//#include <stdio.h>
// int main(void)
// {
// 	char	**out;
// 	int		c;

// 	c = 0;
// 	out = ft_split("13  c",' ');
// 	if(out[0] == NULL)
// 		printf("nullpointer %p\n",out[0]);

// 	printf("%p:{%p}\n",&out[0], out[0]);
// 	while(out[c])
// 	{
// 		printf("%p:{%s}\n",&out[c], out[c]);
// 		c++;
// 	}
// 	c = 0;
// 	printf("out:%p\n", out);
// 	while(out[c])
// 	{
// 		free(out[c]);
// 		c++;
// 	}
// 	free(out[c]);
// 	free(out);
// 	return(0);
// }
