#include <iostream>
#include "minelement.h"
#include "secondminelement.h"
#include "rotate.h"

int main()
{
    int a[] = { 182, -33, -5, 12, -2, 2, 7, 18 };
    std::cout << "minlement: " << minElement(a, 9) << std::endl;
    std::cout << "Second minelement: " << minElement_(&a[0], &a[8]) << std::endl;
    rotate(&a[0], &a[8]);
    for (int i = 0; i < 9; i++)
    {
        std::cout << a[i] << " ";
    }
  return 1;
}
