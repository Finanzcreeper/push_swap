/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:34:46 by nreher            #+#    #+#             */
/*   Updated: 2023/02/13 20:50:55 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	**arrs;
	int	err;
	int	sentinel;
	int	c;

	err = 0;
	arrs = ft_calloc(3, sizeof(int *));
	arrs[0] = handler(argc, argv, &err, &sentinel);
	arrs[1] = ft_calloc(1, sizeof(int));
	arrs[1][0] = sentinel;
	if (err > 0)
	{
		write(1, "Error", 5);
		return (0);
	}

	c = 0;
	printf("input:\n");
	while (arrs[0][c] != sentinel)
	{
		printf("%d\n", arrs[0][c]);
		c++;
	}

	arrs = pb(arrs, sentinel);
	c = 0;
	printf("\n--\na:\n");
	while (arrs[0][c] != sentinel)
	{
		printf("%d\n", arrs[0][c]);
		c++;
	}

	c = 0;
	printf("--\nb:\n");
	while (arrs[1][c] != sentinel)
	{
		printf("%d\n", arrs[1][c]);
		c++;
	}

	arrs = pa(arrs, sentinel);
	c = 0;
	printf("\n--\na:\n");
	while (arrs[0][c] != sentinel)
	{
		printf("%d\n", arrs[0][c]);
		c++;
	}

	c = 0;
	printf("--\nb:\n");
	while (arrs[1][c] != sentinel)
	{
		printf("%d\n", arrs[1][c]);
		c++;
	}
	return (0);
}
