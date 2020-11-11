#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"

int main()
{
  int* arr = new int[5]{ 4, 3, 2, 5, 1 };
  std::cout << Task1::minElement(arr, 5) << std::endl;
  std::cout << Task2::minElement(&arr[0], &arr[4]) << std::endl;
  Task3::rotate(&arr[0], &arr[4]);
  for (int i = 0; i < 5; i++)
  {
    std::cout << arr[i];
  }
  std::cout << std::endl;
  return 0;
}
