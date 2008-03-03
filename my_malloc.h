/*
** my_malloc.h for lib_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Mon Feb 11 13:57:32 2008 julian kirtz
** Last update Sat Feb 16 15:23:32 2008 julian kirtz
*/

#ifndef __MY_MALLOC_H__
#define __MY_MALLOC_H__

#define HEXA "0123456789ABCDEF"

typedef struct	s_blk
{
  unsigned char	psize;
  char		is_available;
  struct s_blk 	*next;
}	       	t_blk;

t_blk	*blk_list[32];

int		my_strlen(char *str);
void		my_putchar(char c);
void		my_putnbr(int nb);
void		my_putstr(char *str);
unsigned int	my_power(int nb, int power);
char		*my_revstr(char *str);
void		conv_10_to_16(unsigned int nbr, char *val);
void		sup_power(unsigned int *size, unsigned char *psize);
void		add_blk(t_blk *blk, unsigned char psize);
t_blk		*get_available(unsigned char psize);
void		*malloc(unsigned int taille);
void		free(void *ptr);
void		*realloc(void *ptr, unsigned int taille);
void		*calloc(unsigned int nombre, unsigned int taille);
void		mem_set(void *ptr, char value, unsigned int size);
unsigned int	get_blk_size(void *ptr);
t_blk		*get_allocated_blk();
char		init_blk_list();
void		show_alloc_mem();

#endif
