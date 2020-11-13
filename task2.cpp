#include "task2.h"

int minElement(int* first_elem, int* last_elem)
{
  int min = std::numeric_limits<int>::max();
  for (int* p = first_elem; p <= last_elem; ++p)
  {
    if (*p < min)
    {
      min = *p;
    }
  }
  return min;
}
