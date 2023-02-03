/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 12:22:45 by nreher            #+#    #+#             */
/*   Updated: 2022/12/05 16:38:25 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		s;
	int		d;
	size_t	dest;

	s = 0;
	dest = 0;
	dest = ft_strlen(dst);
	d = dest;
	if (size == dest)
		return (d + ft_strlen((char *)src));
	if (size < dest)
		return (size + ft_strlen((char *)src));
	while (size - dest - 1 && src[s])
	{
		dst[dest] = src[s];
		s++;
		dest++;
	}
	dst[dest] = '\0';
	return (d + ft_strlen((char *)src));
}
