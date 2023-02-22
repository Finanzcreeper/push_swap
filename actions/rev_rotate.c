/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:51:50 by nreher            #+#    #+#             */
/*   Updated: 2023/02/22 23:02:06 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(struct s_stacks s, int silencer)
{
	int	temp;
	int	c;

	if (s.ar[0][1] == s.st || s.ar[0][0] == s.st)
		return ;
	c = 0;
	while (s.ar[0][c + 1] != s.st)
	{
		c++;
	}
	temp = s.ar[0][c];
	while (c > 0)
	{
		s.ar[0][c] = s.ar[0][c - 1];
		c--;
	}
	s.ar[0][c] = temp;
	if (silencer == 0)
		write(1, "rra\n", 4);
}

void	rrb(struct s_stacks s, int silencer)
{
	int	temp;
	int	c;

	if (s.ar[1][1] == s.st || s.ar[1][0] == s.st)
		return ;
	c = 0;
	while (s.ar[1][c + 1] != s.st)
	{
		c++;
	}
	temp = s.ar[1][c];
	while (c > 0)
	{
		s.ar[1][c] = s.ar[1][c - 1];
		c--;
	}
	s.ar[1][c] = temp;
	if (silencer == 0)
		write(1, "rrb\n", 4);
}

void	rrr(struct s_stacks s, int silencer)
{
	int	temp;
	int	c;

	c = 0;
	while (s.ar[0][c + 1] != s.st)
		c++;
	temp = s.ar[0][c];
	while (c > 0)
	{
		s.ar[0][c] = s.ar[0][c - 1];
		c--;
	}
	s.ar[0][c] = temp;
	c = 0;
	while (s.ar[1][c + 1] != s.st)
		c++;
	temp = s.ar[1][c];
	while (c > 0)
	{
		s.ar[1][c] = s.ar[1][c - 1];
		c--;
	}
	s.ar[1][c] = temp;
	if (silencer == 0)
		write(1, "rrr\n", 4);
}
