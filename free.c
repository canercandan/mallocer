/*
** free.c for in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Tue Feb 12 12:43:26 2008 julian kirtz
** Last update Sat Feb 16 15:23:54 2008 julian kirtz
*/

#include "my_malloc.h"

//extern end;

void	free(void *ptr)
{
  t_blk	*blk;

  //my_putstr("Free\n");
  if (ptr)
    {
      //if (ptr > end)
      //{
      ptr -= sizeof(t_blk);
      blk = ptr;
      blk = blk_list[blk->psize];
      //my_putnbr(blk);
      //my_putchar('\n');
      while (blk && blk != ptr)
	blk = blk->next;
      if (blk)
	blk->is_available = 1;
      else
	my_putstr("Warning: Free impossible !\n");
      //}
    }
  //my_putstr("#############################\n");
}
