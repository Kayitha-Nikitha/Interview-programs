//C program to toggle a specific bit of number
#include<stdio.h>

//toggle function
int toggleBit(int n, int k)
{
    return (n ^ (1 << (k - 1)));
}
  
//driver code
int main()
{
    int n, k;
    printf("enter a number and the specific bit to toggle: ");
    scanf("%d %d", &n, &k);
    printf("Before toggling: %d\n", n);
    printf("After toggling: %d\n", toggleBit(n, k));
    return 0;
}