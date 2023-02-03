/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 13:08:35 by nreher            #+#    #+#             */
/*   Updated: 2022/12/04 17:43:13 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*o;
	unsigned char	*t;
	size_t			c;

	o = (void *)s1;
	t = (void *)s2;
	c = 0;
	while (c < n)
	{
		if (o[c] != t[c])
			return (o[c] - t[c]);
		c++;
	}
	return (0);
}
