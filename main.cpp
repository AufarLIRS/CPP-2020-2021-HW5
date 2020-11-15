#include <iostream>
#include "minElement.h"
#include "minElement_.h"
#include "rotate.h"

int main()
{
  int a[] = { 1, -3, 5, 4, -2, -10, 7, 8, -51 };
  std::cout << "minElement:" << minElement(a, 9) << std::endl;
  std::cout << "minElement_:" << minElement_(&a[0], &a[8]) << std::endl;
  rotate(&a[0], &a[8]);
  for (int i = 0; i < 9; i++)
  {
    std::cout << a[i] << " ";
  }
  return 0;
}
