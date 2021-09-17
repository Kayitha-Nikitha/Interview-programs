//C program to count the setbits
#include<stdio.h>
unsigned int countSetBits(unsigned int);//function prototype

//driver code
int main()
{
   unsigned int n;
   printf("Enter a number: ");
   scanf("%d", &n);
   printf("Setbits count = %d\n", countSetBits(n));//function call
}

//function defination
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while(n){
        count += n & 1;
        n >>= 1;
    }
    return count;
}