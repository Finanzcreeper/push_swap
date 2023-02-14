/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:06:56 by nreher            #+#    #+#             */
/*   Updated: 2023/02/14 11:53:31 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>

int		*handler(int argc, char *argv[], int *err, int *sentinel);
int		non_int_handler(char *input);
int		char_to_int(char *input, long int *out);
int		duplicate_finder(int *a, int argc, int *sentinel);
void	presort(int **a, int argc);
void	push_swap_coder(int o);
void	sa(int *a, int sentinel);
void	sb(int *b, int sentinel);
void	ss(int **arr, int sentinel);
int		**pa(int **old, int sentinel);
int		**pb(int **old, int sentinel);
int		**freelloc_arr(int **old, int flag, int pa, int sentinel);
int		ft_intarrlen(int *a, int sentinel);
void	ra(int **arrs, int sentinel);
void	rb(int **arrs, int sentinel);
void	rr(int **arrs, int sentinel);
void	rra(int **arrs, int sentinel);
void	rrb(int **arrs, int sentinel);
void	rrr(int **arrs, int sentinel);
#endif
