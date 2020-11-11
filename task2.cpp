#include "task2.h"

int Task2::minElement(int* first_elem, int* last_elem)
{
  if (first_elem > last_elem)
    throw std::runtime_error("last < first");
  return Task1::minElement(first_elem, last_elem - first_elem + 1);
}
