/*
** malloc.c for in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Mon Feb 11 11:45:16 2008 julian kirtz
** Last update Mon Mar  3 17:03:43 2008 julian kirtz
*/

#include "my_malloc.h"
#ifndef HAVE_NOT_UNISTD_H
# include <unistd.h>
#endif

void		*malloc(unsigned int taille)
{
  t_blk		*new_blk;
  unsigned char	psize;
  char val[33];

  taille += sizeof(t_blk);
  sup_power(&taille, &psize);
  if (!(new_blk = get_available(psize)))
    {
      new_blk = sbrk(taille);
      add_blk(new_blk, psize);
    }
  else
    {
      new_blk->is_available = 0;
    }
  my_putstr("taille :\n");
  my_putnbr(psize);
  my_putchar('\n');

  conv_10_to_16(new_blk, val);
  my_putstr(val);
  my_putchar('\n');
  show_alloc_mem();
  return (new_blk + 1);
}
