#include "minElement.h"

int minElement(int* array, int size)
{
  int minElement = array[0];

  for (int i = 0; i < size; i++)
  {
    if (array[i] < minElement)
    {
      minElement = array[i];
    }
  }
  return minElement;
}
