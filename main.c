/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:34:46 by nreher            #+#    #+#             */
/*   Updated: 2023/02/15 18:06:36 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	**arrs;
	int	err;
	int	sentinel;
	int	*presorted;

	err = 0;
	arrs = ft_calloc(3, sizeof(int *));
	arrs[0] = handler(argc, argv, &err, &sentinel);
	arrs[1] = ft_calloc(1, sizeof(int));
	arrs[1][0] = sentinel;
	if (err > 0)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	presorted = presort(arrs, sentinel);
	mysort(arrs, sentinel, presorted);
	return (0);
}
