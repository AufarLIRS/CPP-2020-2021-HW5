#include "task3.h"

void rotate(int* first_elem, int* last_elem)
{
  while (first_elem < last_elem)
  {
    int a = *first_elem;
    *first_elem = *last_elem;
    *last_elem = a;
    first_elem++;
    last_elem--;
  }
}
