#include <iostream>
#include <minelementtask3.h>
#include <minelementtask2.h>
#include <minelement.h>

using namespace std;

int main()
{
    int array[] = {7, 10, 3, 4, 5};
    MinElementTask3::reverse(&array[0], &array[4]);
    for (int i = 0; i < 5; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << endl;
    std::cout << MinElement::searchElement(array, 5) << std::endl;
    std::cout << MinElementTask2::searchElement(&array[0], &array[4]) << std::endl;
    //cout << "Hello World!" << endl;
    return 0;
}
