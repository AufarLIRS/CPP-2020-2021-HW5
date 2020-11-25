#include "lib.h"

int minElement2(int* first_elem, int* last_elem)
{
  int i = 0;
  long long min = __INT_MAX__;
  while (*first_elem)
  {
    if (min > *first_elem)
      min = *first_elem;
    first_elem++;
    i++;
  }
  if (min != __INT_MAX__)
    return (min);
  return (0);
}
