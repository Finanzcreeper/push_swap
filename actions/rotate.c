/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 11:17:24 by nreher            #+#    #+#             */
/*   Updated: 2023/02/14 11:54:40 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	ra(int **arrs, int sentinel)
{
	int	temp;
	int	c;

	temp = arrs[0][0];
	c = 0;
	while (arrs[0][c + 1] != sentinel)
	{
		arrs[0][c] = arrs[0][c + 1];
		c++;
	}
	arrs[0][c] = temp;
	write(1, "ra\n", 3);
}

void	rb(int **arrs, int sentinel)
{
	int	temp;
	int	c;

	temp = arrs[1][0];
	c = 0;
	while (arrs[1][c + 1] != sentinel)
	{
		arrs[1][c] = arrs[1][c + 1];
		c++;
	}
	arrs[1][c] = temp;
	arrs[1][c + 1] = sentinel;
	write(1, "rb\n", 3);
}

void	rr(int **arrs, int sentinel)
{
	int	temp;
	int	c;

	temp = arrs[1][0];
	c = 0;
	while (arrs[1][c + 1] != sentinel)
	{
		arrs[1][c] = arrs[1][c + 1];
		c++;
	}
	arrs[1][c] = temp;
	arrs[1][c + 1] = sentinel;
	temp = arrs[0][0];
	c = 0;
	while (arrs[0][c + 1] != sentinel)
	{
		arrs[0][c] = arrs[0][c + 1];
		c++;
	}
	arrs[0][c] = temp;
	arrs[0][c + 1] = sentinel;
	write(1, "rr\n", 3);
}
