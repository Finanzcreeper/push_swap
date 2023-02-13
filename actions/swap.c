/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:18:53 by nreher            #+#    #+#             */
/*   Updated: 2023/02/13 21:39:53 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"
#include <stdio.h>

void	sa(int *a, int sentinel)
{
	int	temp;

	if (a[0] == sentinel || a[1] == sentinel)
		return ;
	temp = a[0];
	a[0] = a[1];
	a[1] = temp;
	write(1, "sa", 2);
}

void	sb(int *b, int sentinel)
{
	int	temp;

	if (b[0] == sentinel || b[1] == sentinel)
		return ;
	temp = b[0];
	b[0] = b[1];
	b[1] = temp;
	write(1, "sb", 2);
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
	write(1, "ss", 2);
}
