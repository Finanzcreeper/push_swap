/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thougty_bubble2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:30:52 by nreher            #+#    #+#             */
/*   Updated: 2023/02/22 23:02:13 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	mysort(struct s_stacks s, int *p, int segment, int silencer)
{
	int	*aw;
	int	i;
	int	moves;

	aw = ft_calloc(2, sizeof(int));
	if (aw == NULL)
	{
		free_arr(s);
		return (2147483647);
	}
	moves = normwhile(&s, segment, p, silencer);
	i = 0;
	while (p[aw[0]] != s.st)
	{
		while (s.ar[1][i] != p[len(p, s.st) - aw[0] - 1] && s.ar[1][i] != s.st)
			i++;
		if (s.ar[1][i] == p[len(p, s.st) - aw[0] - 1])
			s.ar = sorter(s, i, &moves, silencer);
		if (s.ar == NULL)
			break ;
		aw[0]++;
		i = 0;
	}
	freeaw(s, aw);
	return (moves);
}

int	normwhile(struct s_stacks *s, int segment, int *p, int silencer)
{
	int	i;
	int	*aw;
	int	bucket;
	int	moves;

	moves = 0;
	bucket = segment;
	i = -1;
	aw = ft_calloc(2, sizeof(int));
	if (aw == NULL)
		return (0);
	while (i++, p[i] != s -> st)
	{
		bucket = bucky(i, bucket, segment);
		if (bucket > len(p, s -> st))
			bucket = len(p, s -> st);
		while (s -> ar[0][aw[0]] > p[bucket - 1])
			aw[0]++;
		r_or_rr(*s, aw, &moves, silencer);
		s -> ar = pb(*s, silencer);
		moves++;
		aw[0] = 0;
	}
	free(aw);
	return (moves);
}

int	**sorter(struct s_stacks stack, int c, int *moves, int silencer)
{
	int	*aw;

	aw = ft_calloc(2, sizeof(int));
	if (aw == NULL)
	{
		free_arr(stack);
		return (NULL);
	}
	aw[0] = c;
	aw[1] = 1;
	r_or_rr(stack, aw, moves, silencer);
	stack.ar = pa(stack, silencer);
	*moves += 2;
	free(aw);
	return (stack.ar);
}

void	r_or_rr(struct s_stacks stack, int *aw, int *m, int silencer)
{
	int	leng;

	leng = len(stack.ar[aw[1]], stack.st);
	if (aw[0] < leng / 2)
	{
		while (aw[0] > 0)
		{
			if (aw[1] == 0)
			{
				ra(stack, silencer);
				*m += 1;
			}
			if (aw[1] == 1)
			{
				rb(stack, silencer);
				*m += 1;
			}
			aw[0]--;
		}
	}
	else
	{
		normelsa(stack, aw, m, silencer);
	}
}

void	normelsa(struct s_stacks stack, int *aw, int *m, int silencer)
{
	int	leng;

	leng = len(stack.ar[aw[1]], stack.st);
	while (aw[0] < leng)
	{
		if (aw[1] == 0)
		{
			rra(stack, silencer);
			*m += 1;
		}
		if (aw[1] == 1)
		{
			rrb(stack, silencer);
			*m += 1;
		}
		aw[0]++;
	}
}
