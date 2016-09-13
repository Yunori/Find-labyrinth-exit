/*
** mode.c for octocat in /home/bertoc_t/PROJ/octocat/func
** 
** Made by Bertocco Thomas-Killian
** Login   <bertoc_t@etna-alternance.net>
** 
** Started on  Fri Nov 14 17:10:01 2014 Bertocco Thomas-Killian
** Last update Fri Nov 14 17:10:01 2014 Bertocco Thomas-Killian
*/

void    casu();

void	mode(char *c)
{
  if (my_strcmp(c, "a") == 0)
    casu();
  if (my_strcmp(c, "b") == 0)
    hardcore();
}
