#include "task_1.h"

int Task_1::minElement(int* array, int size)
{
  if (size < 0)
    throw std::runtime_error("size < 0");
  return *(std::min_element(array, array + size));
}
