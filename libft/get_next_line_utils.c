/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 13:14:57 by nreher            #+#    #+#             */
/*   Updated: 2023/02/02 20:39:15 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	ft_strlen(const char *str)
// {
// 	int	len;

// 	len = 0;
// 	while (str[len])
// 		len++;
// 	return (len);
// }

char	*ft_stranl( const char *s)
{
	int		i;
	int		j;
	char	*out;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == '\n')
		{
			out = ft_calloc(BUFFER_SIZE - i, sizeof(char));
			while (s[i + 1])
			{
				out[j] = s[i + 1];
				i++;
				j++;
			}
			return (out);
		}
		i++;
	}
	return (0);
}

char	*ft_strbnl(char *s)
{
	char	*out;
	int		c;
	int		i;

	c = 0;
	i = 0;
	while (s[c] != '\n')
	{
		if (s[c] == '\0')
		{
			break ;
		}
		c++;
	}
	out = ft_calloc(c + 2, sizeof(char));
	if (out == NULL)
		return (NULL);
	while (i <= c)
	{
		out[i] = s[i];
		i++;
	}
	return (out);
}

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*a1;
// 	char	*a2;
// 	char	*new;
// 	int		c;
// 	int		i;

// 	a1 = (char *)s1;
// 	a2 = (char *)s2;
// 	c = 0;
// 	i = 0;
// 	new = malloc((ft_strlen(a1) + ft_strlen(a2) + 1) * sizeof(char));
// 	if (new == NULL)
// 		return (NULL);
// 	while (s1[c])
// 	{
// 		new[c] = s1[c];
// 		c++;
// 	}
// 	while (s2[i])
// 		new[c++] = s2[i++];
// 	new[c] = '\0';
// 	return (new);
// }

// void	*ft_calloc(size_t nmemb, size_t size)
// {
// 	size_t	all;
// 	char	*result;

// 	all = nmemb * size;
// 	result = malloc(all);
// 	if (result == NULL)
// 		return (NULL);
// 	while (all > 0)
// 	{
// 		all--;
// 		result[all] = '\0';
// 	}
// 	return (result);
// }
