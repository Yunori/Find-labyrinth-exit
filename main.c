/*
** main.c for octocat in /home/bertoc_t/PROJ/octocat
** 
** Made by Bertocco Thomas-Killian
** Login   <bertoc_t@etna-alternance.net>
** 
** Started on  Wed Nov 12 10:01:16 2014 Bertocco Thomas-Killian
** Last update Fri Nov 14 17:10:50 2014 Bertocco Thomas-Killian
*/

void    my_putstr(char *str);
int	my_strcmp(char *s1, char *s2);
char    *readLine();
void	mode(char *c);
int	main()
{
  my_putstr("\n(づ｡◕‿‿◕｡)づ Bienvenue dans le labyrinthe ☜(ﾟヮﾟ☜)\n\n");
  my_putstr("Choisissez vote mode\n[a] Casu\n[b] Hardcore\n\nexit : quitte le programme\n");
  char *c;
  c = "blank";
  while(my_strcmp(c, "exit") != 0)
    {
      c = readLine();
      if(my_strcmp(c, "a") == 0 || my_strcmp(c, "b") == 0)
	{
	  mode(c);
	  my_putstr("\nChoisissez votre mode\n[a] Casu\n[b] Hardcore\n\nexit : quitte le programme\n");
	}
      else if (my_strcmp(c, "exit") != 0)
	{
	  my_putstr("Veuillez entrer a ou b\n");
	}
    }
  return 0;
}
