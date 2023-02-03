/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:57:26 by nreher            #+#    #+#             */
/*   Updated: 2022/12/09 13:37:38 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a1;
	char	*a2;
	char	*new;
	int		c;
	int		i;

	a1 = (char *)s1;
	a2 = (char *)s2;
	c = 0;
	i = 0;
	new = ft_calloc((ft_strlen(a1) + ft_strlen(a2) + 1), sizeof(char));
	if (new == NULL)
		return (NULL);
	while (s1[c])
	{
		new[c] = s1[c];
		c++;
	}
	while (s2[i])
	{
		new[c] = s2[i];
		c++;
		i++;
	}
	return (new);
}
