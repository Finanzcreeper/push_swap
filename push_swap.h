#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

int		*handler(int argc, char *argv[],int *err);
int		non_int_handler(char *input);
int		char_to_int(char *input, long int *out);
int		duplicate_finder(int *a, int argc);
void	presort(int **a, int argc);
#endif