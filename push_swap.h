/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:06:56 by nreher            #+#    #+#             */
/*   Updated: 2023/02/15 17:33:22 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "libft/libft.h"

int		*handler(int argc, char *argv[], int *err, int *sentinel);
int		non_int_handler(char *input);
int		char_to_int(char *input, long int *out);
int		duplicate_finder(int *a, int argc, int *sentinel);
int		*presort(int **arrs, int sentinel);
void	sa(int **arrs, int sentinel);
void	sb(int **arrs, int sentinel);
void	ss(int **arr, int sentinel);
int		**pa(int **old, int sentinel);
int		**pb(int **old, int sentinel);
void	free_arr(int **old);
int		**alloc_arr(int **old, int sentinel, int pa);
int		ft_intarrlen(int *a, int sentinel);
void	ra(int **arrs, int sentinel);
void	rb(int **arrs, int sentinel);
void	rr(int **arrs, int sentinel);
void	rra(int **arrs, int sentinel);
void	rrb(int **arrs, int sentinel);
void	rrr(int **arrs, int sentinel);
void	bubble(int **arrs, int sentinel);
int		*fillarr(int *in, int sentinel);
void	mysort(int **arrs, int sentinel, int *presorted);
int		**sorter(int **arrs, int sentinel, int c);
#endif
