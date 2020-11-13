#include "task1.h"

int minElement(int* array, int size)
{
  int min = std::numeric_limits<int>::max();
  for (int* p = array; p < array + size; ++p)
  {
    if (*p < min)
    {
      min = *p;
    }
  }
  return min;
}
