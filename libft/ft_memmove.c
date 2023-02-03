/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:13:43 by nreher            #+#    #+#             */
/*   Updated: 2022/12/09 13:29:13 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_move(unsigned char *s, unsigned char *d, size_t n, int rev)
{
	size_t	c;

	c = 0;
	if (rev == 1)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (c < n)
		{
			d[c] = s[c];
			c++;
		}
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			c;
	int				rev;

	rev = 0;
	c = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (dest == 0 && src == 0)
		return (0);
	while (c <= n)
	{
		if (&s[c] == &d[0])
			rev = 1;
		c++;
	}
	ft_move(s, d, n, rev);
	return (dest);
}
