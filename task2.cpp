#include "task2.h"
#include <iostream>

using namespace std;

int minElement(int* first_elem, int* last_elem) {
    int min = *first_elem;
    for (int *i = first_elem + 1; i != last_elem; i++) {

        if (*i < min) {
            min = *i;
        }

    }
       return min;
}
