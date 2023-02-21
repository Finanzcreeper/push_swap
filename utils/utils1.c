/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:55:22 by nreher            #+#    #+#             */
/*   Updated: 2023/02/21 15:20:12 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	freeaw(struct s_stacks s, int *aw)
{
	free(aw);
	free_arr(s);
}

int	bucky(int i, int bucket, int segment)
{
	if (i >= bucket)
		bucket += segment;
	return (bucket);
}

int	*schwap(int *a, int *temp, int c)
{
	*temp = a[c];
	a[c] = a[c + 1];
	a[c + 1] = *temp;
	*temp = 1;
	return (a);
}

int	*normain(struct s_stacks stack)
{
	int	*pre;

	if (issort(stack) == 0)
	{
		free_arr(stack);
		return (NULL);
	}
	pre = presort(stack);
	if (pre == NULL)
	{
		free_arr(stack);
		return (NULL);
	}
	return (pre);
}
