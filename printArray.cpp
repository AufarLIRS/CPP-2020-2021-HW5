#include "printArray.h"

void PrintArray::printArray(int* array, int size)
{
  for (int i = 0; i < size; i++)
  {
    std::cout << array[i] << ' ';
  }
}
