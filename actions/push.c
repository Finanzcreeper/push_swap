/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:18:29 by nreher            #+#    #+#             */
/*   Updated: 2023/02/21 13:38:28 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	**pb(struct s_stacks old, int silencer)
{
	int	**new;
	int	c;

	if (old.arrs[0][0] == old.sentinel)
		return (old.arrs);
	if (old.arrs == NULL || old.arrs[1] == NULL || old.arrs[0] == NULL)
		return (NULL);
	new = alloc_arr(old.arrs, old.sentinel, 0);
	if (new == NULL || new[1] == NULL || new[0] == NULL)
		return (NULL);
	new[1][0] = old.arrs[0][0];
	c = 0;
	while (old.arrs[0][c + 1] != old.sentinel)
	{
		new[0][c] = old.arrs[0][c + 1];
		c++;
	}
	new[0][c] = old.sentinel;
	c = 1;
	c = push_norm_loop(old, c, 1, new);
	new[1][c] = old.sentinel;
	free_arr(old);
	if (silencer == 0)
		write(1, "pb\n", 3);
	return (new);
}

int	**pa(struct s_stacks old, int silencer)
{
	int	**new;
	int	c;

	if (old.arrs[1][0] == old.sentinel)
		return (old.arrs);
	if (old.arrs == NULL || old.arrs[1] == NULL || old.arrs[0] == NULL)
		return (NULL);
	new = alloc_arr(old.arrs, old.sentinel, 1);
	if (new == NULL || new[1] == NULL || new[0] == NULL)
		return (NULL);
	new[0][0] = old.arrs[1][0];
	c = 0;
	while (old.arrs[1][c + 1] != old.sentinel)
	{
		new[1][c] = old.arrs[1][c + 1];
		c++;
	}
	new[1][c] = old.sentinel;
	c = 1;
	c = push_norm_loop(old, c, 0, new);
	new[0][c] = old.sentinel;
	free_arr(old);
	if (silencer == 0)
		write(1, "pa\n", 3);
	return (new);
}

void	free_arr(struct s_stacks old)
{
	if (old.arrs != NULL)
	{
		if (old.arrs[1] != NULL)
			free(old.arrs[1]);
		if (old.arrs[0] != NULL)
			free(old.arrs[0]);
		if (old.arrs != NULL)
			free(old.arrs);
	}
}

int	**alloc_arr(int **old, int sentinel, int pa)
{
	int	**new;

	if (pa == 1)
	{
		new = ft_calloc(2, sizeof(int *));
		if (new != NULL)
		{
			new[1] = ft_calloc(ft_intarrlen(old[1], sentinel), sizeof(int *));
			new[0] = ft_calloc(ft_intarrlen(old[0], sentinel) + 1,
					sizeof(int *));
		}
	}
	else
	{
		new = ft_calloc(2, sizeof(int *));
		new[0] = ft_calloc(ft_intarrlen(old[0], sentinel), sizeof(int *));
		new[1] = ft_calloc(ft_intarrlen(old[1], sentinel) + 1, sizeof(int *));
	}
	return (new);
}
