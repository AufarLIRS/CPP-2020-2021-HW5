#include <iostream>
#include <vector>

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

void rotate (int *first_elem, int *last_elem)
{
    std::vector<int> buff;
    int *p_fe = first_elem;
    int i;

    while (p_fe != last_elem)
    {
        buff.push_back(*p_fe);
        p_fe++;
    }
    buff.push_back(*last_elem);
    i = buff.size() - 1;
    while (first_elem != last_elem)
    {
        *first_elem = buff[i--];
        first_elem++;
    }
    *first_elem = buff[i];
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
    int *array;
    array = (int *)malloc(4 * sizeof(int));
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;

//    printf("%d\n", minElement(array, 3));
//    printf("%d\n", minElement(array, array + 2));
    rotate(array, array + 3);
    for (int i = 0; i < 4; i++)
        printf("%d ", array[i]);

    return 0;
}
