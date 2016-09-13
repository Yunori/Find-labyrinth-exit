/*
** hcheck.c for octocat in /home/bertoc_t/PROJ/octocat/func
** 
** Made by Bertocco Thomas-Killian
** Login   <bertoc_t@etna-alternance.net>
** 
** Started on  Fri Nov 14 17:09:50 2014 Bertocco Thomas-Killian
** Last update Fri Nov 14 17:09:51 2014 Bertocco Thomas-Killian
*/

void    my_putstr(char *str);
int     my_charcmp(char s1, char s2);
void    my_aff_tab(char tab[10][10]);
char    *readLine();
int     chel(char *c);
int	ttb(char check);
char    hcheck(char tab[10][10])
{
  char *c;
  c = "blank";
  int x;
  x= 2;
  int y;
  y= 1;
  tab[x][y] = 'p';
  int s; 
  s= 0;
  int z;
  while (z != 1)
    {
      my_aff_tab(tab);
      my_putstr("w = up // s = down // d = right // a = left\n\ncommande?\n");
      c = readLine();
      if(chel(c) == 0)
	while(c[s])
	  {
	    z = 1;
	    if (my_charcmp(c[s], 'w') == 1)
	      x = x - 1;
	    else if(my_charcmp(c[s], 's') == 1)
	      x = x + 1;
	    else if(my_charcmp(c[s], 'a') == 1)
	      y = y - 1;
	    else if(my_charcmp(c[s], 'd') == 1)
	      y = y + 1;
	    if(ttb(tab[x][y]) != 0)
	      break;
	    s++;
	  }
      else if(chel(c) == 1)
	{
	  my_putstr("Veuillez entrer seulement les caracteres suivants: w, s, a ou d\n");
	  tab[x][y] = 'p';
	}
    }
  if(my_charcmp(tab[x][y], 's') != 1 && my_charcmp(tab[x][y], 'm') != 1)
    my_putstr("Vous vous etes perdu. Un grievers vous a dévoré\n ┌∩┐(◣_◢)┌∩┐ Noob ┌∩┐(◣_◢)┌∩┐\n");
}
