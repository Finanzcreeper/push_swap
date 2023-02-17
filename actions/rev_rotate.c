/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:51:50 by nreher            #+#    #+#             */
/*   Updated: 2023/02/17 18:22:11 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(struct s_stacks s, int silencer)
{
	int	temp;
	int	c;

	if (s.arrs[0][1] == s.sentinel || s.arrs[0][0] == s.sentinel)
		return ;
	c = 0;
	while (s.arrs[0][c + 1] != s.sentinel)
	{
		c++;
	}
	temp = s.arrs[0][c];
	while (c > 0)
	{
		s.arrs[0][c] = s.arrs[0][c - 1];
		c--;
	}
	s.arrs[0][c] = temp;
	if (silencer == 0)
		write(1, "rra\n", 4);
}

void	rrb(struct s_stacks s, int silencer)
{
	int	temp;
	int	c;

	if (s.arrs[1][1] == s.sentinel || s.arrs[1][0] == s.sentinel)
		return ;
	c = 0;
	while (s.arrs[1][c + 1] != s.sentinel)
	{
		c++;
	}
	temp = s.arrs[1][c];
	while (c > 0)
	{
		s.arrs[1][c] = s.arrs[1][c - 1];
		c--;
	}
	s.arrs[1][c] = temp;
	if (silencer == 0)
		write(1, "rrb\n", 4);
}

void	rrr(struct s_stacks s, int silencer)
{
	int	temp;
	int	c;

	c = 0;
	while (s.arrs[0][c + 1] != s.sentinel)
		c++;
	temp = s.arrs[0][c];
	while (c > 0)
	{
		s.arrs[0][c] = s.arrs[0][c - 1];
		c--;
	}
	s.arrs[0][c] = temp;
	c = 0;
	while (s.arrs[1][c + 1] != s.sentinel)
		c++;
	temp = s.arrs[1][c];
	while (c > 0)
	{
		s.arrs[1][c] = s.arrs[1][c - 1];
		c--;
	}
	s.arrs[1][c] = temp;
	if (silencer == 0)
		write(1, "rrr\n", 4);
}
