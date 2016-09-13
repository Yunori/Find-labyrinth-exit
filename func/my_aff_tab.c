/*
** my_aff_tab.c for octocat in /home/bertoc_t/PROJ/octocat
** 
** Made by Bertocco Thomas-Killian
** Login   <bertoc_t@etna-alternance.net>
** 
** Started on  Thu Nov 13 16:24:16 2014 Bertocco Thomas-Killian
** Last update Thu Nov 13 16:24:17 2014 Bertocco Thomas-Killian
*/
int     my_charcmp(char s1, char s2);

void my_aff_tab(char tab[10][10])
{
  int a;
  int b;
  a = 0;
  while (a < 10)
    {
      b = 0;
      while (b < 10)
        {
	  if(my_charcmp(tab[a][b], 'f') == 1)
	    my_putchar(' ');
	  if(my_charcmp(tab[a][b], 'm') == 1)
	    my_putchar('#');
	  if(my_charcmp(tab[a][b], 'p') == 1)
	  my_putchar('@');
	  if(my_charcmp(tab[a][b], 's') == 1)
	    my_putchar('X');
          b++;
        }
      my_putchar('\n');
      a++;
    }
}
