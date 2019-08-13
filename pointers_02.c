//Further examples of pointers
#include <stdio.h>

int main (void)
{
  char c = 'Q';
  char *char_pointer = &c;
  //This intialization needs to occur after variable 'c' has been defined, because
  //a variable needs to be defined before it can be referenced

  printf ("%c %c\n", c, *char_pointer);

  c = '/';
  printf ("%c %c\n", c, *char_pointer);

  *char_pointer = '(';
  printf ("%c %c\n", c, *char_pointer);

  return 0;
}
