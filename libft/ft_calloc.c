/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 15:02:25 by nreher            #+#    #+#             */
/*   Updated: 2023/01/15 17:48:09 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	all;
	void	*result;

	all = nmemb * size;
	result = malloc(all);
	if (result == NULL)
		return (NULL);
	result = ft_memset(result, 0, all);
	return (result);
}
