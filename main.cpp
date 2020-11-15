#include <iostream>
#include <array>
#include "task1.h"
#include "task2.h"
#include "task3.h"
using namespace std;

int main()
{
  int arr[] = { 1, 2, 3, 4, 5 };
  cout << task1::minElement(arr, 5) << endl;

  cout << task2::minElement(&arr[0], &arr[4]) << endl;
  task3::rotate(&arr[0], &arr[4]);

  for (int i = 0; i < 5; i++)
  {
    cout << arr[i];
  }
  cout << endl;
  return 0;
}
