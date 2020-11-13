#include <iostream>

using namespace std;
#include "task1.h"
#include "task2.h"
#include "task3.h"

int main()
{
  int m[] = { 4, 3, 2, 1 };
  std::cout << minElement(m, 4) << std::endl;
  std::cout << minElement(&m[0], &m[3]) << std::endl;
  rotate(&m[0], &m[3]);
  for (int i = 0; i < 4; i++)
    std::cout << m[i] << " ";
  std::cout << std::endl;
  return 0;
}
