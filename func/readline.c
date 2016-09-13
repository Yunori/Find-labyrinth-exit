/*
** readline.c for octocat in /home/bertoc_t/PROJ/octocat/func
** 
** Made by Bertocco Thomas-Killian
** Login   <bertoc_t@etna-alternance.net>
** 
** Started on  Fri Nov 14 17:12:29 2014 Bertocco Thomas-Killian
** Last update Fri Nov 14 17:12:29 2014 Bertocco Thomas-Killian
*/

/*
  Cette fonction permet de récuper une ligne
  de moins de 50 caractères sur l'entrée standard.
  La fonction ne prend pas de paramètre et renvoit une chaîne
  allouée (pensez a free()).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

char        *readLine()
{
  ssize_t   ret;
  char      *buff;

  if ((buff = malloc(sizeof(*buff) * (50 + 1))) == NULL)
    return (NULL);
  if ((ret = read(0, buff, 50000)) > 1)
    {
      buff[ret - 1] = '\0';
      return (buff);
    }
  buff[0] = '\0';
  return (buff);
}
