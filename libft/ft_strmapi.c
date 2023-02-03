/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:55:36 by nreher            #+#    #+#             */
/*   Updated: 2022/12/09 11:09:49 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		c;
	char				*out;

	c = 0;
	out = ft_calloc(1 + (ft_strlen((char *)s)), sizeof(char));
	if (out == NULL)
		return (NULL);
	while (s[c])
	{
		out[c] = f(c, s[c]);
		c++;
	}
	return (out);
}
