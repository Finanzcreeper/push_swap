/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:42:35 by nreher            #+#    #+#             */
/*   Updated: 2022/12/09 16:26:43 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	c;
	size_t	i;
	int		l;

	c = 0;
	i = 0;
	l = ft_strlen((char *)little);
	if (little[c] == '\0')
		return ((char *)big);
	while (i <= len)
	{
		if (little[c] == '\0')
			return ((char *)&big[i - l]);
		if (big[i] == '\0')
			return (0);
		if (big[i] != little[c])
		{
			i = i - c;
			c = 0;
		}
		else
			c++;
		i++;
	}
	return (0);
}
