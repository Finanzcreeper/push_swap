/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreher <nreher@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:06:56 by nreher            #+#    #+#             */
/*   Updated: 2023/02/22 23:02:29 by nreher           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "libft/libft.h"

struct s_stacks
{
	int	st;
	int	**ar;
};

int		*handler(int argc, char *argv[], int *err, int *st);
int		non_int_handler(char *input);
int		char_to_int(char *input, long int *out);
int		duplicate_finder(int *a, int argc, int *st);
int		*presort(struct s_stacks stack);
void	sa(struct s_stacks stack, int silencer);
void	sb(struct s_stacks stack, int silencer);
void	ss(struct s_stacks stack, int silencer);
int		**pa(struct s_stacks old, int silencer);
int		**pb(struct s_stacks old, int silencer);
void	free_arr(struct s_stacks old);
int		**alloc_arr(int **old, int st, int pa);
int		len(int *a, int st);
void	ra(struct s_stacks stack, int silencer);
void	rb(struct s_stacks stack, int silencer);
void	rr(struct s_stacks stack, int silencer);
void	rra(struct s_stacks stack, int silencer);
void	rrb(struct s_stacks stack, int silencer);
void	rrr(struct s_stacks stack, int silencer);
int		*fillarr(int *in, int st);
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
void	annoyrm(struct s_stacks *stack, int argc, char *argv[], int *err);
void	freeaw(struct s_stacks s, int *aw);
int		bucky(int i, int bucket, int segment);
int		*schwap(int *a, int *temp, int c);
//test
int		*normain(struct s_stacks stack);
#endif
