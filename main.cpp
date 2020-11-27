#include "lib.h"

int main()
{
  int i = 0;
  int arr1[] = { 4, 6, 1, 5, 4, -3, 0 };
  std::cout << minElement(arr1, 6) << std::endl;
  std::cout << minElement2(arr1, arr1 + 6) << std::endl;
  rotate(arr1, arr1 + 6);
  while (i < 7)
  {
    std::cout << arr1[i];
    i++;
  }

  return 0;
}
