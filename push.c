/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:18:29 by nreher            #+#    #+#             */
/*   Updated: 2023/02/15 18:00:29 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	**pb(int **old, int sentinel)
{
	int	**new;
	int	c;

	if (old[0][0] == sentinel)
		return (old);
	new = alloc_arr(old, sentinel, 0);
	new[1][0] = old[0][0];
	c = 0;
	while (old[0][c + 1] != sentinel)
	{
		new[0][c] = old[0][c + 1];
		c++;
	}
	new[0][c] = sentinel;
	c = 1;
	while (old[1][c - 1] != sentinel)
	{
		new[1][c] = old[1][c - 1];
		c++;
	}
	new[1][c] = sentinel;
	free_arr(old);
	write(1, "pb\n", 3);
	return (new);
}

int	**pa(int **old, int sentinel)
{
	int	**new;
	int	c;

	if (old[1][0] == sentinel)
		return (old);
	new = alloc_arr(old, sentinel, 1);
	new[0][0] = old[1][0];
	c = 0;
	while (old[1][c + 1] != sentinel)
	{
		new[1][c] = old[1][c + 1];
		c++;
	}
	new[1][c] = sentinel;
	c = 1;
	while (old[0][c - 1] != sentinel)
	{
		new[0][c] = old[0][c - 1];
		c++;
	}
	new[0][c] = sentinel;
	free_arr(old);
	write(1, "pa\n", 3);
	return (new);
}

void	free_arr(int **old)
{
	free(old[1]);
	free(old[0]);
	free(old);
}

int	**alloc_arr(int **old, int sentinel, int pa)
{
	int	**new;

	if (pa == 1)
	{
		new = ft_calloc(3, sizeof(int *));
		new[1] = ft_calloc(ft_intarrlen(old[1], sentinel), sizeof(int *));
		new[0] = ft_calloc(ft_intarrlen(old[0], sentinel) + 1, sizeof(int *));
	}
	else
	{
		new = ft_calloc(3, sizeof(int *));
		new[0] = ft_calloc(ft_intarrlen(old[0], sentinel), sizeof(int *));
		new[1] = ft_calloc(ft_intarrlen(old[1], sentinel) + 1, sizeof(int *));
	}
	return (new);
}
