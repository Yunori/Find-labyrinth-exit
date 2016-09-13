#include <unistd.h>
void    my_putchar(char c);
void    my_putstr(char *str);
void    my_put_nbr(int n)
{
  int   of;
  int   div;
  if (n == -2147483648)
    {
      my_putstr("-2147483648");
      of = 1;
    }
  if (n < 0 && of != 1)
    {
      my_putchar('-');
      n = n * -1;
    }
  div = 1;
  while ((n / div) >= 10 && of != 1)
    div = div * 10;
  while (div > 0 && of != 1)
    {
      my_putchar((n/div) %10 + 48);
      div = div / 10;
    }
}
