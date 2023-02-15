/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:18:53 by nreher            #+#    #+#             */
/*   Updated: 2023/02/15 18:00:38 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(int **arrs, int sentinel)
{
	int	temp;

	if (arrs[0][0] == sentinel || arrs[0][1] == sentinel)
		return ;
	temp = arrs[0][0];
	arrs[0][0] = arrs[0][1];
	arrs[0][1] = temp;
	write(1, "sa\n", 3);
}

void	sb(int **arrs, int sentinel)
{
	int	temp;

	if (arrs[1][0] == sentinel || arrs[1][1] == sentinel)
		return ;
	temp = arrs[1][0];
	arrs[1][0] = arrs[1][1];
	arrs[1][1] = temp;
	write(1, "sb\n", 3);
}

void	ss(int **arrs, int sentinel)
{
	int	temp;

	if (arrs[0][0] == sentinel || arrs[1][0] == sentinel)
		return ;
	if (arrs[1][1] == sentinel || arrs[1][1] == sentinel)
		return ;
	temp = arrs[0][0];
	arrs[0][0] = arrs[0][1];
	arrs[0][1] = temp;
	temp = arrs[1][0];
	arrs[1][0] = arrs[1][1];
	arrs[1][1] = temp;
	write(1, "ss\n", 3);
}
