#include "Homework2.h"

int Homework2::minElement (int* first_elem, int* last_elem)
{
    return Homework1::minElement(first_elem, last_elem - first_elem + 1);
}
