#include "task1.h"
int task1::minElement(int* array, int size)
{
  return *(std::min_element(array, array + size));
}
