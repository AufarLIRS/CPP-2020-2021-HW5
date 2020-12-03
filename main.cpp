#include <iostream>

#include "minelem.h"
#include "mineleminotherway.h"
#include "revolve.h"

using namespace std;

int main()
{
      int a[15];
      for (int i = 0; i < 15; i++) {
          a[i] = rand() % 100 + 1;
      }
      std::cout << "Current array: " << a << std::endl;
      std::cout << "minElement:" << minelem(a, 9) << std::endl;
      std::cout << "minElementInOtherWay:" << minElemInOtherWay(&a[0], &a[8]) << std::endl;
      revolve(&a[0], &a[8]);
      for (int i = 0; i < 9; i++)
      {
        std::cout << a[i] << " ";
      }
      return 0;
}
