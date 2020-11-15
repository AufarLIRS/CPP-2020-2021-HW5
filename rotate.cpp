#include "rotate.h"

void rotate(int* first_elem, int* last_elem)
{
  while (first_elem < last_elem)
  {
    int tmp = *first_elem;
    *first_elem = *last_elem;
    *last_elem = tmp;

    last_elem--;
    first_elem++;
  }
}
