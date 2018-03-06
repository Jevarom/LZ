#include <stdio.h>

int main(void) {
  int count = 10, x;
  //Astericks defines the pointer 'int_pointer' is a type pointer to 'int'
  int *int_pointer;
  //To setup the indirect reference between in_pointer and count
  int_pointer = &count;
  /*Address operator has the effect of assigning to the variable int_pointer,
  the value of count, but a pointer to the variable count*/
  x = *int_pointer //Reference the contents of 'count' through the pointer
  //variable 'int_pointer', you use the indirection operator, which is the *

  printf ("count = %i, x = %i\n", count, x);

  return 0;
}
