/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:06:56 by nreher            #+#    #+#             */
/*   Updated: 2023/02/17 21:44:29 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "libft/libft.h"

struct s_stacks
{
	int	sentinel;
	int	**arrs;
};

int		*handler(int argc, char *argv[], int *err, int *sentinel);
int		non_int_handler(char *input);
int		char_to_int(char *input, long int *out);
int		duplicate_finder(int *a, int argc, int *sentinel);
int		*presort(struct s_stacks stack);
void	sa(struct s_stacks stack, int silencer);
void	sb(struct s_stacks stack, int silencer);
void	ss(struct s_stacks stack, int silencer);
int		**pa(struct s_stacks old, int silencer);
int		**pb(struct s_stacks old, int silencer);
void	free_arr(struct s_stacks old);
int		**alloc_arr(int **old, int sentinel, int pa);
int		ft_intarrlen(int *a, int sentinel);
void	ra(struct s_stacks stack, int silencer);
void	rb(struct s_stacks stack, int silencer);
void	rr(struct s_stacks stack, int silencer);
void	rra(struct s_stacks stack, int silencer);
void	rrb(struct s_stacks stack, int silencer);
void	rrr(struct s_stacks stack, int silencer);
int		*fillarr(int *in, int sentinel);
int		issort(struct s_stacks stack);
int		mysort(struct s_stacks stack, int *p, int segment, int silencer);
void	r_or_rr(struct s_stacks stack, int *aw, int *moves, int silencer);
int		**sorter(struct s_stacks stack, int c, int *moves, int silencer);
void	u6(struct s_stacks stack, int *presorted);
int		**threelen(int **a, struct s_stacks stack);
void	fourlen(struct s_stacks stack, int *presorted);
void	fivelen(struct s_stacks stack, int *presorted);
int		testsort(struct s_stacks stack, int *presorted);
void	normloop(struct s_stacks stack, int c);
int		push_norm_loop(struct s_stacks old, int c, int pb, int **new);
void	doerr(struct s_stacks stack);
void	mocknorm(struct s_stacks *mockstack, struct s_stacks stack);
int		normwhile(struct s_stacks *s, int segment, int *p, int silencer);
void	normelsa(struct s_stacks stack, int *aw, int *m, int silencer);
//test
void	annoyrm(struct s_stacks *stack, int argc, char *argv[], int *err);
#endif
