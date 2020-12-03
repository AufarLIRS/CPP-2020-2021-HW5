#include "mineleminotherway.h"

int minelem2 (int* first_elem, int* last_elem){

    int minElement = *first_elem;

    for (int* i = first_elem; i <= last_elem; i++)
    {
      if (*i < minElement)
      {
        minElement = *i;
      }
    }
    return minElement;
}
