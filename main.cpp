#include <iostream>

using namespace std;

int minElement (int* array, int size)
{
    int min = 2147483647;
    size--;
    while (size != 0)
    {
        if (array[size] < min)
            min = array[size];
        size--;
    }
    return (min);
}

void rotate (int* first_elem, int* last_elem)
{
    int k;

    while (first_elem != last_elem)
    {
        k = *first_elem;
        *first_elem = *last_elem;
        *last_elem = k;
        first_elem++;
        last_elem--;
    }
}

int minElement (int* first_elem, int* last_elem)
{
    int min = 2147483647;

    while (first_elem != last_elem)
    {
        if (*first_elem < min)
            min = *first_elem;
        first_elem++;
    }
    return (min);
}

int main()
{
    int array[3];
    array[0] = 3;
    array[1] = 2;
    array[2] = 4;

    printf("%d\n", minElement(array, 3));
    printf("%d\n", minElement(array, array + 2));
    rotate(array, array + 2);
    for (int i = 0; i < 3; i++)
        printf("%d ", array[i]);

    return 0;
}
