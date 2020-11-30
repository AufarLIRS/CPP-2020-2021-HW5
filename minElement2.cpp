#include "minElement.cpp"
int minElement2(int* first_elem, int* last_elem)
{
  if (last_elem > first_elem)
  {
    return minElement(first_elem, last_elem - first_elem + 1);
  }
}
