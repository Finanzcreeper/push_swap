/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:34:46 by nreher            #+#    #+#             */
/*   Updated: 2023/02/14 12:00:19 by nreher           ###   ########.fr       */
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
}
