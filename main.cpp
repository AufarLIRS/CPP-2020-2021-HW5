#include <iostream>
#include "number_1.h"
#include "number_2.h"
#include "number_3.h"
#include "printArray.h"

int main()
{
  int n = 10;
  int mas[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

  std::cout << "Array = ";
  PrintArray::printArray(mas, n);
  std::cout << std::endl;

  // Results.
  std::cout << "1. Minimal element in array = " << Number_1::minElement(mas, n) << std::endl;
  std::cout << "2. Minimal element in array = " << Number_2::minElement(&mas[0], &mas[n - 1]) << std::endl;

  Number_3::rotate(&mas[0], &mas[n - 1]);
  std::cout << "3. Reverse array = ";
  PrintArray::printArray(mas, n);
  return 0;
}
