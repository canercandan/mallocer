/*
** add_blk.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Tue Feb 12 12:02:08 2008 julian kirtz
** Last update Mon Mar  3 17:08:53 2008 julian kirtz
*/

#include "my_malloc.h"

void		add_blk(t_blk *blk, unsigned char psize)
{
  static t_blk	*last_blk[32];
  static char	is_init = 0;

  if (!is_init)
    is_init = init_blk_list();
  blk->is_available = 0;
  blk->psize = psize;
  blk->next = 0;
  my_putnbr(blk->psize);
  my_putstr("\tpsize\n");
  if (blk_list[psize])
    {
      last_blk[psize]->next = blk;
      last_blk[psize] = blk;
    }
  else
    {
      blk_list[psize] = blk;
      last_blk[psize] = blk_list[psize];
    }
}
