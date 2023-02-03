/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:52:17 by nreher            #+#    #+#             */
/*   Updated: 2022/12/09 13:33:19 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	c;

	c = 0;
	while (c < n)
	{
		if (s1[c] != s2[c])
			return (((unsigned char *)s1)[c] - ((unsigned char *)s2)[c]);
		if (s1[c] == '\0' || s2[c] == '\0')
			return (0);
		c++;
	}
	return (0);
}
