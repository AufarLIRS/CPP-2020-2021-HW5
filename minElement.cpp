#include <iostream>
#include <algorithm>

int minElement(int* array, int size)
{
  if (size > 0 && size != 0)
  {
    return *(std::min_element(array, array + size));
  }
  else
    throw;
}
