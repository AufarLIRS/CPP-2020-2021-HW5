void rotate(int* first_elem, int* last_elem)
{
  while (last_elem > first_elem)
  {
    int tmp = *first_elem;
    *first_elem = *last_elem;
    *last_elem = tmp;

    first_elem++;
    last_elem--;
  }
}
