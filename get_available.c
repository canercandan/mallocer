/*
** get_available.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Tue Feb 12 12:10:41 2008 julian kirtz
** Last update Mon Mar  3 16:54:27 2008 julian kirtz
*/

#include "my_malloc.h"

t_blk	*get_available(unsigned char psize)
{
  t_blk	*blk;

  blk = blk_list[psize];
  while (blk)
    {
      if (blk->is_available)
	break;
      blk = blk->next;
    }
  return (blk);
}
