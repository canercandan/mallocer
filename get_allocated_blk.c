/*
** get_allocated_blk.c for  in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc2
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Sat Feb 16 13:32:25 2008 julian kirtz
** Last update Mon Mar  3 17:11:33 2008 julian kirtz
*/

#include "my_malloc.h"

t_blk	*get_allocated_blk()
{
  t_blk	*blk;
  t_blk	*alloc;
  t_blk	*last_alloc;
  int	hash;


  char	val[33];

  hash = 32;
  alloc = 0;
  while (hash--)
    {
      blk = blk_list[hash];
      while (blk)
	{
	  my_putchar('Q');
	  my_putnbr(hash);
	  my_putchar('\n');
	  conv_10_to_16(blk, val);
	  my_putstr(val);
	  my_putchar('\n');
	  if (blk->psize != hash)
	    {
	      my_putstr("Error\n");
	      exit(0);
	    }
	  
	  my_putchar('\n');
	  if (!(blk->is_available))
	    {
	      if (alloc)
		{
		  last_alloc->next = blk;
		  last_alloc = blk;
		}
	      else
		{
		  alloc = blk;
		  last_alloc = blk;
		}
	    }
	  blk = blk->next;
	}
    }
  last_alloc->next = 0;
  return (alloc);
}
