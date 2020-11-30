#include "minElement2.cpp"
#include "rotate.cpp"
int main()
{
  int mas[] = { 1, 2, 3, 45, -4 };
  int mas1[] = { -333, 2, -23, 45, 4 };
  std::cout << minElement(mas, 5) << std::endl;
  std::cout << minElement2(&mas1[0], &mas1[4]) << std::endl;
  rotate(&mas[0], &mas[4]);
  for (int i = 0; i < 5; i++)
  {
    std::cout << mas[i] << " ";
  }
}
