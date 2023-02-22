/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:18:53 by nreher            #+#    #+#             */
/*   Updated: 2023/02/22 23:02:10 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(struct s_stacks s, int silencer)
{
	int	temp;

	if (s.ar[0][0] == s.st || s.ar[0][1] == s.st)
		return ;
	temp = s.ar[0][0];
	s.ar[0][0] = s.ar[0][1];
	s.ar[0][1] = temp;
	if (silencer == 0)
		write(1, "sa\n", 3);
}

void	sb(struct s_stacks s, int silencer)
{
	int	temp;

	if (s.ar[1][0] == s.st || s.ar[1][1] == s.st)
		return ;
	temp = s.ar[1][0];
	s.ar[1][0] = s.ar[1][1];
	s.ar[1][1] = temp;
	if (silencer == 0)
		write(1, "sb\n", 3);
}

void	ss(struct s_stacks s, int silencer)
{
	int	temp;

	if (s.ar[0][0] == s.st || s.ar[1][0] == s.st)
		return ;
	if (s.ar[1][1] == s.st || s.ar[1][1] == s.st)
		return ;
	temp = s.ar[0][0];
	s.ar[0][0] = s.ar[0][1];
	s.ar[0][1] = temp;
	temp = s.ar[1][0];
	s.ar[1][0] = s.ar[1][1];
	s.ar[1][1] = temp;
	if (silencer == 0)
		write(1, "ss\n", 3);
}
