#include "minelement2.h"

int minElement(int *first_elem, int *last_elem)
{
    int min = *first_elem;

    for(int *i = first_elem; i <= last_elem; ++i)
    {
        if(*i < min)
        {
            min = *i;
        }
    }

    return min;
}
