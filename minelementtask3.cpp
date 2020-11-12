#include "minelementtask3.h"

void MinElementTask3::reverse(int* first_elem, int* last_elem)
{
   if(first_elem > last_elem) {
       throw std::runtime_error("last_elem < first_elem");
   }
   std::reverse(first_elem, last_elem + 1);
}
