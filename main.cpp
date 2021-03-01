#include <iostream>
#include "task1.h"
#include "task2.h"
#include "task3.h"

using namespace std;


int main()
{
    int size = 3;
    int array[] = {1,2,3,0, 5};
    int min = minElement(array, array + 5);
    rotate(array, array + 5);
    for (int i = 0; i < 5; i++) {
        cout << array[i] << endl;
    }

    cout << min << endl;
    return 0;
}
