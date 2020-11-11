#include "getarray.h"

void GetArray::getArray(int* array, int size)
{
  for (int i = 0; i < size; i++)
  {
    std::cout << array[i] << ' ';
  }
}
