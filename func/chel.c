/*
** chel.c for octocat in /home/bertoc_t/PROJ/octocat/func
** 
** Made by Bertocco Thomas-Killian
** Login   <bertoc_t@etna-alternance.net>
** 
** Started on  Fri Nov 14 17:09:40 2014 Bertocco Thomas-Killian
** Last update Fri Nov 14 17:09:41 2014 Bertocco Thomas-Killian
*/

#include <unistd.h>

void    my_putchar(char c);

int	chel(char *c)
{
  int s;
  s = 0;
  int d = 0;
  while(c[s])
    {
      if(c[s] != 'w' && c[s] != 's' && c[s] != 'a' && c[s] != 'd')
	{
	  d = 1;
	  break;
	}
      s++;
    }
  return d;
}
