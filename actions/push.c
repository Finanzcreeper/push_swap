/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:18:29 by nreher            #+#    #+#             */
/*   Updated: 2023/02/13 21:54:44 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../push_swap.h"

int	**pb(int **old, int sentinel)
{
	int	**new;
	int	c;

	if (old[0][0] == sentinel)
		return (old);
	new = freelloc_arr(old, 1, 0, sentinel);
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
	freelloc_arr(old, 0, 0, sentinel);
	write(1, "pb", 2);
	return (new);
}

int	**pa(int **old, int sentinel)
{
	int	**new;
	int	c;

	if (old[1][0] == sentinel)
		return (old);
	new = freelloc_arr(old, 1, 1, sentinel);
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
	freelloc_arr(old, 0, 0, sentinel);
	write(1, "pa", 2);
	return (new);
}

int	**freelloc_arr(int **old, int flag, int pa, int sntnl)
{
	int	**new;

	if (flag == 1)
	{
		if (pa == 1)
		{
			new = ft_calloc(3, sizeof(int *));
			new[1] = ft_calloc(ft_intarrlen(old[1], sntnl), sizeof(int *));
			new[0] = ft_calloc(ft_intarrlen(old[0], sntnl) + 1, sizeof(int *));
		}
		else
		{
			new = ft_calloc(3, sizeof(int *));
			new[0] = ft_calloc(ft_intarrlen(old[0], sntnl), sizeof(int *));
			new[1] = ft_calloc(ft_intarrlen(old[1], sntnl) + 1, sizeof(int *));
		}
	}
	else
	{
		free(old[1]);
		free(old[0]);
		free(old);
	}
	return (new);
}

int	ft_intarrlen(int *a, int sentinel)
{
	int	c;

	c = 0;
	while (a[c] != sentinel)
	{
		c++;
	}
	return (c);
}
