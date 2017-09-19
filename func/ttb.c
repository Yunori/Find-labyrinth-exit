/*
** ttb.c for octocat in /home/bertoc_t/PROJ/octocat/func
** 
** Made by Bertocco Thomas-Killian
** Login   <bertoc_t@etna-alternance.net>
** 
** Started on  Fri Nov 14 17:12:36 2014 Bertocco Thomas-Killian
** Last update Fri Nov 14 17:12:37 2014 Bertocco Thomas-Killian
*/

int     my_charcmp(char s1, char s2);
void    my_putstr(char *str);

int	ttb(char check)
{
  int i;
  i = 0;
  if(my_charcmp(check, 's') == 1)
    {
      my_putstr("(づ｡◕‿‿◕｡)づ GG Vous avez gagné ┏(-_-)┛┗(-_-﻿ )┓┗(-_-)┛┏(-_-)┓\n");
      i = 1;
    }
  if(my_charcmp(check, 'm') == 1)
    {
      my_putstr("Vous avez foncé dans un mur...\n ┌∩┐(◣_◢)┌∩┐ Noob ┌∩┐(◣_◢)┌∩┐\n");
      i = 1;
    }
  return i;
}
