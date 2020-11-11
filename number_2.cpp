#include "number_2.h"

int Number_2::minElement(int* first_elem, int* last_elem)
{
  auto result = Number_1::minElement(first_elem, last_elem - first_elem + 1);
  return result;
}
