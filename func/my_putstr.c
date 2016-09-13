/*
** my_putstr.c for octocat in /home/bertoc_t/PROJ/octocat
** 
** Made by Bertocco Thomas-Killian
** Login   <bertoc_t@etna-alternance.net>
** 
** Started on  Wed Nov 12 10:08:03 2014 Bertocco Thomas-Killian
** Last update Wed Nov 12 10:26:52 2014 Bertocco Thomas-Killian
*/

#include <unistd.h>

void    my_putchar(char c);

void    my_putstr(char *str)
{
  int c;
  c = 0;
  while(str[c])
    {
      my_putchar(str[c]);
      c++;
    }
}
