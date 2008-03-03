/*
** get_blk_list.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Mon Feb 11 15:43:17 2008 julian kirtz
** Last update Tue Feb 12 11:54:28 2008 julian kirtz
*/

#include "my_malloc.h"

t_blk	*blk_list(t_blk *blk, char to_free)
{
  static t_blk	*blk_list = 0;
  t_blk		*blk_tmp;

  if (blk)
    if (!to_free)
      {
	blk_tmp = blk_list;
	while (blk_tmp && blk_tmp->psize != blk->psize && !blk_tmp->is_available)
	  blk_tmp = blk_tmp->next;
	if (blk_tmp)
	  
	blk->next = blk_list;
	blk_list = blk;
	blk_list->is_available = 0;
      }
    else
      {
	blk_tmp = blk_list;
	while (blk_tmp && blk_tmp->is_available)
	  blk_tmp = blk_tmp->next;
	if (blk_tmp)
	  blk_tmp->is_available = 1;
      }
  return (blk_list);
}
