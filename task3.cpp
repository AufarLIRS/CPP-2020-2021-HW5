#include "task3.h"
#include <iostream>

using namespace std;

void rotate (int* first_elem, int* last_elem) {
    --last_elem;
    int tmp = 0;
    while (first_elem < last_elem) {
        tmp = *first_elem;
        *first_elem = *last_elem;
        *last_elem = tmp;
        first_elem++;
        last_elem--;
    }

}
