#include "number_3.h"

void Number_3::rotate(int* first_elem, int* last_elem)
{
  std::reverse(first_elem, last_elem + 1);
}
