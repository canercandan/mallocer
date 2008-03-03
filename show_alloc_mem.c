/*
** show_alloc_mem.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Wed Feb 13 10:19:22 2008 julian kirtz
** Last update Mon Mar  3 17:14:01 2008 julian kirtz
*/

#include "my_malloc.h"
#ifndef HAVE_NOT_UNISTD_H
# include <unistd.h>
#endif

void	show_alloc_mem()
{
  t_blk	*blk;
  int	blk_size;
  char  val[33];

  my_putstr("break : 0x");
  conv_10_to_16((unsigned int)sbrk(0), val);
  my_putstr(val);
  my_putchar('\n');
  blk = get_allocated_blk();
  while (blk)
    {
      blk_size = my_power(2, blk->psize);
      my_putstr("0x");
      conv_10_to_16((int)blk, val);
      my_putstr(val);
      my_putstr(" - 0x");
      conv_10_to_16((unsigned int)blk + blk_size, val);
      my_putstr(val);
      my_putstr(" : ");
      my_putnbr(blk_size);
      my_putstr(" octets\n");
      blk = blk->next;
    }
}
