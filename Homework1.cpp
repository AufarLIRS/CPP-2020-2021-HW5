#include "Homework1.h"

int Homework1::minElement(int* array, int size)
{
    return *(std::min_element(array, array + size));
}
