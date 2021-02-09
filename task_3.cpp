#include "task_3.h"

void Task_3::rotate(int* first_elem, int* last_elem)
{
  if (first_elem > last_elem)
    throw std::runtime_error("last < first");
  std::reverse(first_elem, last_elem + 1);
}
