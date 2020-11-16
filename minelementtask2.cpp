#include "minelementtask2.h"

int MinElementTask2::searchElement(int *first_elem, int *last_elem)
{
    if (first_elem > last_elem){
        throw std::runtime_error("last < first");
    }

    return MinElement::searchElement(first_elem,  last_elem - first_elem + 1);

}
