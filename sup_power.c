/*
** sup_power.c for my_malloc in /u/epitech_2010s/kirtz_j/cu/rendu/c/my_malloc
** 
** Made by julian kirtz
** Login   <kirtz_j@epitech.net>
** 
** Started on  Mon Feb 11 14:35:04 2008 julian kirtz
** Last update Thu Feb 14 17:49:31 2008 julian kirtz
*/

void	sup_power(unsigned int *size, unsigned char *psize)
{
  int	value;

  value = *size;
  *size = 1;
  *psize = 0;
  while (value > *size)
    {
      *size <<= 1;
      (*psize)++;
    }
}
