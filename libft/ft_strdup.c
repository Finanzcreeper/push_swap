/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 14:21:14 by nreher            #+#    #+#             */
/*   Updated: 2022/12/09 13:35:22 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*new;

	size = 0;
	while (s[size])
		size++;
	size++;
	new = malloc(size * sizeof(char));
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s, size);
	return (new);
}
