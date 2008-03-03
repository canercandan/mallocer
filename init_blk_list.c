/*
** init_blk_list.c for  in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc2
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Sat Feb 16 13:57:26 2008 julian kirtz
** Last update Sat Feb 16 15:23:14 2008 julian kirtz
*/

#include "my_malloc.h"

char	init_blk_list()
{
  int	hash;

  hash = 32;
  while (hash--)
    blk_list[hash] = 0;
  return (1);
}
