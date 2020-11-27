#include "lib.h"

int minElement(int* array, int size)
{
  int i = 0;
  int min = *array;
  while (i < size)
  {
    if (*array <= min)
      min = *array;
    array++;
    i++;
  }
  if (min != 0)
    return (min);
  return (0);
}
