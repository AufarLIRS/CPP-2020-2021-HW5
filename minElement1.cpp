#include "minElement1.h"

int minElement1 (int* array, int size){

    int min_element = array[0];

    for(int i = 0; i < size; i++)
    {
        if (array[i] < min_element)
        {
            min_element = array[i];
        }
    }

    return min_element;
}
