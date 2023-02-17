/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:18:53 by nreher            #+#    #+#             */
/*   Updated: 2023/02/17 18:21:18 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(struct s_stacks s, int silencer)
{
	int	temp;

	if (s.arrs[0][0] == s.sentinel || s.arrs[0][1] == s.sentinel)
		return ;
	temp = s.arrs[0][0];
	s.arrs[0][0] = s.arrs[0][1];
	s.arrs[0][1] = temp;
	if (silencer == 0)
		write(1, "sa\n", 3);
}

void	sb(struct s_stacks s, int silencer)
{
	int	temp;

	if (s.arrs[1][0] == s.sentinel || s.arrs[1][1] == s.sentinel)
		return ;
	temp = s.arrs[1][0];
	s.arrs[1][0] = s.arrs[1][1];
	s.arrs[1][1] = temp;
	if (silencer == 0)
		write(1, "sb\n", 3);
}

void	ss(struct s_stacks s, int silencer)
{
	int	temp;

	if (s.arrs[0][0] == s.sentinel || s.arrs[1][0] == s.sentinel)
		return ;
	if (s.arrs[1][1] == s.sentinel || s.arrs[1][1] == s.sentinel)
		return ;
	temp = s.arrs[0][0];
	s.arrs[0][0] = s.arrs[0][1];
	s.arrs[0][1] = temp;
	temp = s.arrs[1][0];
	s.arrs[1][0] = s.arrs[1][1];
	s.arrs[1][1] = temp;
	if (silencer == 0)
		write(1, "ss\n", 3);
}
