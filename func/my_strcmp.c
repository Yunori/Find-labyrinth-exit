/*
** my_strcmp.c for octocat in /home/bertoc_t/PROJ/octocat/func
** 
** Made by Bertocco Thomas-Killian
** Login   <bertoc_t@etna-alternance.net>
** 
** Started on  Fri Nov 14 17:12:18 2014 Bertocco Thomas-Killian
** Last update Fri Nov 14 17:12:18 2014 Bertocco Thomas-Killian
*/

int     my_strcmp(char *s1, char *s2)
{
  int   i;

  i = 0;
  while (s1[i] == s2[i] && s1[i] != '\0')
    i++;
  return (s1[i] - s2[i]);
}

int	my_charcmp(char s1, char s2)
{
  int i;
  i = 0;
  if (s1 == s2)
    i++;
  return (i);
}
