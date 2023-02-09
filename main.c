/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:34:46 by nreher            #+#    #+#             */
/*   Updated: 2023/02/09 14:17:07 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	*a;
	int	*err;

	*err = 0;
	a = handler(argc, argv, err);
	if (*err > 0)
	{
		write(1, "Error", 5);
		return (0);
	}
	presort(&a, argc);
	return (0);
}