/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:34:46 by nreher            #+#    #+#             */
/*   Updated: 2023/02/22 23:02:28 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int				err;
	int				*pre;
	struct s_stacks	stack;

	err = 0;
	annoyrm(&stack, argc, argv, &err);
	if (stack.ar == NULL || stack.ar[0] == NULL || stack.ar[1] == NULL)
		return (-1);
	if (err > 0)
	{
		doerr(stack);
		return (0);
	}
	pre = normain(stack);
	if (pre == NULL)
		return (0);
	if (len(stack.ar[0], stack.st) < 6)
	{
		u6(stack, pre);
		free(pre);
		return (0);
	}
	mysort(stack, pre, testsort(stack, pre) + 1, 0);
	free(pre);
	return (0);
}

int	testsort(struct s_stacks stack, int *presorted)
{
	int				*r;
	int				err;
	int				c;
	struct s_stacks	mockstack;

	err = 0;
	r = ft_calloc(len(stack.ar[0], stack.st) + 1, sizeof(int));
	while (err < len(stack.ar[0], stack.st))
	{
		mocknorm(&mockstack, stack);
		err++;
		r[err - 1] = mysort(mockstack, presorted, err, 1);
	}
	r[err] = stack.st;
	c = 0;
	err = 1;
	while (r[err] != stack.st)
	{
		if (r[c] > r[err])
			c = err;
		err++;
	}
	free(r);
	return (c);
}

void	mocknorm(struct s_stacks *mockstack, struct s_stacks stack)
{
	mockstack -> ar = ft_calloc(3, sizeof(int *));
	if (mockstack -> ar != NULL)
	{
		mockstack -> ar[0] = fillarr(stack.ar[0], stack.st);
		mockstack -> ar[1] = ft_calloc(1, sizeof(int));
		if (mockstack -> ar != NULL)
			mockstack -> ar[1][0] = stack.st;
		mockstack -> st = stack.st;
	}
}
