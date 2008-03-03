/*
** get_blk_size.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Wed Feb 13 14:18:26 2008 julian kirtz
** Last update Mon Mar  3 16:27:59 2008 julian kirtz
*/

#include "my_malloc.h"

unsigned int	get_blk_size(void *ptr)
{
  t_blk		*blk;

  blk = ptr;
  blk = blk_list[blk->psize];
  while (blk && blk != ptr)
    blk = blk->next;
  if (blk)
    return (my_power(2, blk->psize));
  return (0);
}
