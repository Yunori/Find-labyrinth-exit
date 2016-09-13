/*
** hardcore.c for octocat in /home/bertoc_t/PROJ/octocat/func
** 
** Made by Bertocco Thomas-Killian
** Login   <bertoc_t@etna-alternance.net>
** 
** Started on  Fri Nov 14 17:11:23 2014 Bertocco Thomas-Killian
** Last update Fri Nov 14 17:11:23 2014 Bertocco Thomas-Killian
*/

char    hcheck(char tab[10][10]);
void	hardcore()
{
  static char tab[10][10] = {
    {'m', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 's', 'm'},
    {'m', 'f', 'f', 'f', 'm', 'f', 'f', 'f', 'f', 'm'},
    {'m', 'f', 'm', 'f', 'm', 'f', 'm', 'm', 'm', 'm'},
    {'m', 'm', 'f', 'f', 'm', 'f', 'f', 'f', 'f', 'm'},
    {'m', 'm', 'f', 'm', 'm', 'm', 'm', 'm', 'f', 'm'},
    {'m', 'f', 'f', 'm', 'm', 'm', 'm', 'f', 'f', 'm'},
    {'m', 'f', 'm', 'm', 'm', 'm', 'f', 'f', 'm', 'm'},
    {'m', 'f', 'f', 'm', 'm', 'f', 'f', 'm', 'm', 'm'},
    {'m', 'm', 'f', 'f', 'f', 'f', 'm', 'm', 'm', 'm'},
    {'m', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm', 'm'},
  };
  hcheck(tab);
}
