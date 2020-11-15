#include "task2.h"
#include "task1.h"
int task2::minElement(int* first_elem, int* last_elem)
{
  return task1::minElement(first_elem, last_elem - first_elem + 1);
}
