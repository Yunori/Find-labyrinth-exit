/*
** check.c for octocat in /home/bertoc_t/PROJ/octocat/func
** 
** Made by Bertocco Thomas-Killian
** Login   <bertoc_t@etna-alternance.net>
** 
** Started on  Fri Nov 14 17:11:39 2014 Bertocco Thomas-Killian
** Last update Fri Nov 14 17:11:40 2014 Bertocco Thomas-Killian
*/

void    my_putstr(char *str);
int     my_charcmp(char s1, char s2);
int     my_strcmp(char *s1, char *s2);
void    my_aff_tab(char tab[10][10]);
char    *readLine();
int     ttb(char check);
char	check(char tab[10][10])
{
  char *c;
  c = "blank";
  int x = 2;
  int y = 1;
while(my_strcmp(c, "exit") != 0)
    {
      tab[x][y] = 'p';
      my_aff_tab(tab);
      my_putstr("w = up // s = down // d = right // a = left\n\ncommande?\n");
      c = readLine();
      tab[x][y] = 'f';
      if (my_strcmp(c, "w") == 0)
	  x = x - 1;
      else if(my_strcmp(c, "s") == 0)
	  x = x + 1;
      else if(my_strcmp(c, "a") == 0)
	  y = y - 1;
      else if(my_strcmp(c, "d") == 0)
	  y = y + 1;
      else
	{
	  my_putstr("Veuillez entrer w, s, a ou d\n");
	  tab[x][y] = 'p';
	}
      if(ttb(tab[x][y]) == 1)
	break;
    }
}
