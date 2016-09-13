/*
** my_putchar.c for octocat in /home/bertoc_t/PROJ/octocat
** 
** Made by Bertocco Thomas-Killian
** Login   <bertoc_t@etna-alternance.net>
** 
** Started on  Wed Nov 12 10:00:13 2014 Bertocco Thomas-Killian
** Last update Wed Nov 12 10:00:38 2014 Bertocco Thomas-Killian
*/

#include <unistd.h>

void    my_putchar(char c)
{
  write (1, &c, 1);
}
