#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"

int main()
{
  int arr[] = { 4, 3, 2, 5, 1 };
  std::cout << Task_1::minElement(arr, 5) << std::endl;
  std::cout << Task_2::minElement(&arr[0], &arr[4]) << std::endl;
  Task_3::rotate(&arr[0], &arr[4]);
  for (int i = 0; i < 5; i++)
  {
    std::cout << arr[i];
  }
  std::cout << std::endl;
   return 0;
}

