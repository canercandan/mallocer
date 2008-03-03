/*
** malloc.c for in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Mon Feb 11 11:45:16 2008 julian kirtz
** Last update Wed Feb 13 15:01:01 2008 julian kirtz
*/

#include "my_malloc.h"
#ifndef HAVE_NOT_UNISTD_H
# include <unistd.h>
#endif

void		*malloc(int taille)
{
  t_blk		*new_blk;
  unsigned char	psize;

  size += sizeof(t_blk);
  sup_power(&size, &psize);
  if (!(new_blk = get_available(psize)))
    new_blk = sbrk(size);
  add_blk(new_blk, psize);
  return (new_blk + 1);
}
