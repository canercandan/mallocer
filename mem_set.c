/*
** mem_set.c for  in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Fri Feb 15 13:58:37 2008 julian kirtz
** Last update Fri Feb 15 14:16:04 2008 julian kirtz
*/

void	*mem_set(void *ptr, char value, unsigned int size)
{
  char	*addr;

  addr = ptr;
  while (size--)
    addr[size] = value;
  return (ptr);
}
