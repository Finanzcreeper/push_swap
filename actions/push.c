/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:18:29 by nreher            #+#    #+#             */
/*   Updated: 2023/02/22 23:02:04 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	**pb(struct s_stacks old, int silencer)
{
	int	**new;
	int	c;

	if (old.ar[0][0] == old.st)
		return (old.ar);
	if (old.ar == NULL || old.ar[1] == NULL || old.ar[0] == NULL)
		return (NULL);
	new = alloc_arr(old.ar, old.st, 0);
	if (new == NULL || new[1] == NULL || new[0] == NULL)
		return (NULL);
	new[1][0] = old.ar[0][0];
	c = 0;
	while (old.ar[0][c + 1] != old.st)
	{
		new[0][c] = old.ar[0][c + 1];
		c++;
	}
	new[0][c] = old.st;
	c = 1;
	c = push_norm_loop(old, c, 1, new);
	new[1][c] = old.st;
	free_arr(old);
	if (silencer == 0)
		write(1, "pb\n", 3);
	return (new);
}

int	**pa(struct s_stacks old, int silencer)
{
	int	**new;
	int	c;

	if (old.ar[1][0] == old.st)
		return (old.ar);
	if (old.ar == NULL || old.ar[1] == NULL || old.ar[0] == NULL)
		return (NULL);
	new = alloc_arr(old.ar, old.st, 1);
	if (new == NULL || new[1] == NULL || new[0] == NULL)
		return (NULL);
	new[0][0] = old.ar[1][0];
	c = 0;
	while (old.ar[1][c + 1] != old.st)
	{
		new[1][c] = old.ar[1][c + 1];
		c++;
	}
	new[1][c] = old.st;
	c = 1;
	c = push_norm_loop(old, c, 0, new);
	new[0][c] = old.st;
	free_arr(old);
	if (silencer == 0)
		write(1, "pa\n", 3);
	return (new);
}

void	free_arr(struct s_stacks old)
{
	if (old.ar != NULL)
	{
		if (old.ar[1] != NULL)
			free(old.ar[1]);
		if (old.ar[0] != NULL)
			free(old.ar[0]);
		if (old.ar != NULL)
			free(old.ar);
	}
}

int	**alloc_arr(int **old, int st, int pa)
{
	int	**new;

	if (pa == 1)
	{
		new = ft_calloc(2, sizeof(int *));
		if (new != NULL)
		{
			new[1] = ft_calloc(len(old[1], st), sizeof(int *));
			new[0] = ft_calloc(len(old[0], st) + 1,
					sizeof(int *));
		}
	}
	else
	{
		new = ft_calloc(2, sizeof(int *));
		new[0] = ft_calloc(len(old[0], st), sizeof(int *));
		new[1] = ft_calloc(len(old[1], st) + 1, sizeof(int *));
	}
	return (new);
}
