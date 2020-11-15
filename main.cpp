#include <iostream>
#include "minelement.h"
#include "minelement2.h"
#include "rotate.h"

int main()
{
    int arr[] = { 9, 6, 4, 2, 3, 5 };
    std::cout << "minElement: " << minElement(arr, 6) << std::endl;
    std::cout << "minElement2: " <<  minElement(&arr[0], &arr[5]) << std::endl;
    rotate(&arr[0], &arr[5]);
    std::cout << "rotate: ";
    for(int i = 0; i < 6; i++)
    {
        std::cout<< arr[i] << " ";
    }

    return 0;
}
