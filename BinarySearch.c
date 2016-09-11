#include <stdio.h>
#define MAX 1000

long long int array[MAX];

int main()
{
   int current, first, last, middle, num_of_elements, search ;

   scanf("%d",&num_of_elements);

   for (current = 0; current < num_of_elements; current++)
    {
      scanf("%d",&array[current]);
    }
    scanf("%d", &search);

   first = 0;
   last = num_of_elements - 1;
   middle = (first+last)/2;

   while (first <= last) {
      if (array[middle] < search)
         first = middle + 1;
      else if (array[middle] == search)
      {
         printf("%d is at index %d.\n", search, middle+1);
         break;
      }
      else
      {
         last = middle - 1;
      }
        middle = (first + last)/2;
   }
   if (first > last)
      printf("%d is not in the given array\n", search);

   return 0;
}
