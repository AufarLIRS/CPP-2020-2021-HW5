#include "rotate.h"

void rotate (int* first_elem, int* last_elem){

    while (first_elem < last_elem)
    {
        int temp = *first_elem;
        *first_elem = *last_elem;
        *last_elem = temp;

        ++first_elem;
        --last_elem;
    }
}
