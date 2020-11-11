#include <iostream>

#include "minElement1.h"
#include "minElement2.h"
#include "rotate.h"

using namespace std;

int main()
{

    const int SIZE = 5;
    int arr[SIZE] =  {19,12,37,24,15};

    cout << minElement1(arr, SIZE) << endl;

    int* first_elem = &arr[0];
    int* last_elem = &arr[SIZE-1];

    cout << minElement2(first_elem, last_elem) << endl ;

    rotate(first_elem, last_elem);

    for(int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << " " ;
    }

    cout << endl;

    return 0;
}
