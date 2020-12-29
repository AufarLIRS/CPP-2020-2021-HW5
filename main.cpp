#include <iostream>
#include "Homework1.h"
#include "Homework2.h"
#include "Homework3.h"

using namespace std;

int main()
{
    int size = 5;
    int array[5] = {4,3,1,7,9};

    std::cout<<"min element = " << Homework1::minElement(array, size) << std::endl;
    std::cout<<"min element = " << Homework2::minElement(&array[0], &array[size-1]) << std::endl;
    Homework3::rotate(&array[0], &array[size-1]);

    for (int i = 0; i < size; i++)
    {
        std::cout<<array[i] << std::endl;
    }
    return 0;
}
