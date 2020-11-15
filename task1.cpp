#include "task1.h"
int task1::minElement(int* array, int size)
{
  return *(std::min(array, array + size));
}
