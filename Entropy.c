#include <stdio.h>
#include <stdlib.h>

//This is called Hamming Distance Algorithm used in Discrete Mathematics to find the minimum distance

int checkEntropy(int n,int x)
{
  int count_bit_1 = 0;
  int num = n^x;
  while(num)
  {
    count_bit_1 += num & 1;// Anding the bit with 1 , if 1 adding the count to 1
    num >>= 1;       // Right Shifting by 1
  }
  return count_bit_1;
}

int main()

{
    int n,x,i;
    printf("Enter the two numbers\n");
    scanf("%d %d",&n,&x);
    printf("%d",checkEntropy(n,x));
    return 0;
}
