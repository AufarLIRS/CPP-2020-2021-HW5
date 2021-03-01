#include "task1.h"
#include <iostream>

using namespace std;


int minElement(int* array, int size) {
        int min = array[0];
        for (int i = 1; i < size; i++) {
            if (array[i] < min) {
                min = array[i];
            }
        }
        return min;
}
