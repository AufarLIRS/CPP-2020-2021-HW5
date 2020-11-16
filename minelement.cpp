#include "minelement.h"

int MinElement::searchElement(int *array, int size)
{
    if(size < 0) {
        throw std::runtime_error("size < 0");
    }

    return *(std::min_element(array, array + size));
}
