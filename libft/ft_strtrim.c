/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:17:24 by nreher            #+#    #+#             */
/*   Updated: 2023/01/04 15:22:38 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	frontremover(char *s1, char *set)
{
	int		c;
	int		i;
	int		removefront;

	removefront = 0;
	c = 0;
	i = 0;
	while (set[i] && s1[c])
	{
		if (s1[c] == set[i])
		{
			removefront++;
			c++;
			i = 0;
		}
		else
			i++;
	}
	return (removefront);
}

static int	backremover(char *s1, char *set)
{
	int		c;
	int		i;
	int		removeback;

	removeback = 0;
	i = 0;
	c = ft_strlen(s1) - 1;
	i = 0;
	while (set[i] && s1[c])
	{
		if (s1[c] == set[i])
		{
			removeback++;
			i = 0;
			c--;
		}
		else
			i++;
	}
	return (removeback);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		c;
	int		rfrnt;
	int		rbck;
	char	*out;

	if (s1 == NULL || set == NULL)
		return (NULL);
	c = ft_strlen((char *)s1);
	rbck = backremover((char *)s1, (char *)set);
	rfrnt = frontremover((char *)s1, (char *)set);
	if (rbck == c)
		out = ft_substr(s1, rbck + 1, 1);
	else
		out = ft_substr(s1, rfrnt, ft_strlen((char *)s1) - rbck - rfrnt);
	if (out == NULL)
		return (NULL);
	return (out);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	*s1 = "   xxx   xxx";
// 	char	*s2 = " x";
// 	char	*out;

// 	out = ft_strtrim(s1,s2);
// 	printf("{%s}\n",out);
// 	free(out);
// 	return(0);
// }
