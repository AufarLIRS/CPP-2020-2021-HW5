#include "number_1.h"

int Number_1::minElement(int* array, int size)
{
  auto result = *(std::min_element(array, array + size));
  return result;
}
