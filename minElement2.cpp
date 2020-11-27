#include "lib.h"

int minElement2(int* first_elem, int* last_elem)
{
  int i = 0;
  long long min = *first_elem;
  while (*first_elem)
  {
    if (*first_elem <= min)
      min = *first_elem;
    first_elem++;
    i++;
  }
  if (min != __INT_MAX__)
    return (min);
  return (0);
}
