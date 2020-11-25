#include "lib.h"

int minElement(int* array, int size)
{
  int i = 0;
  long long min = __INT_MAX__;
  while (*array != '\0' && i < size)
  {
    if (*array < min)
      min = *array;
    array++;
    i++;
  }
  if (min != __INT_MAX__)
    return (min);
  return (0);
}
