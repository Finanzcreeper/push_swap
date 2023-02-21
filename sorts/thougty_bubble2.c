/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thougty_bubble2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 09:30:52 by nreher            #+#    #+#             */
/*   Updated: 2023/02/21 15:04:22 by nreher           ###   ########.fr       */
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
	while (p[aw[0]] != s.sentinel)
	{
		while (s.arrs[1][i] != p[aw[0]] && s.arrs[1][i] != s.sentinel)
			i++;
		if (s.arrs[1][i] == p[aw[0]])
			s.arrs = sorter(s, i, &moves, silencer);
		if (s.arrs == NULL)
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
	while (i++, p[i] != s -> sentinel)
	{
		bucket = bucky(i, bucket, segment);
		if (bucket > ft_intarrlen(p, s -> sentinel))
			bucket = ft_intarrlen(p, s -> sentinel);
		while (s -> arrs[0][aw[0]] > p[bucket - 1])
			aw[0]++;
		r_or_rr(*s, aw, &moves, silencer);
		s -> arrs = pb(*s, silencer);
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
	stack.arrs = pa(stack, silencer);
	ra(stack, silencer);
	*moves += 2;
	free(aw);
	return (stack.arrs);
}

void	r_or_rr(struct s_stacks stack, int *aw, int *m, int silencer)
{
	int	len;

	len = ft_intarrlen(stack.arrs[aw[1]], stack.sentinel);
	if (aw[0] < len / 2)
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
	int	len;

	len = ft_intarrlen(stack.arrs[aw[1]], stack.sentinel);
	while (aw[0] < len)
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
