#include "minElement2.h"

int minElement2 (int* first_elem, int* last_elem){

    int min_elem = *first_elem;

    while(first_elem != last_elem)
    {
        if (*first_elem < min_elem)
        {
            min_elem = *first_elem;
        }

        first_elem ++;
    }

    return min_elem;
}
