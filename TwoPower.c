//C program to check 2 power numbers
#include<stdio.h>
unsigned int countSetBits(unsigned int);//function prototype

int main()
{
    unsigned n, count;
    printf("Enter a number: ");
    scanf("%d", &n);
    count=countSetBits(n);
    if(count==1){
        printf("Yes, %d is 2 power number", n);
    }
    else{
       printf("%d is not a 2 power number", n);
    }
}

//function to count the setbits
unsigned int countSetBits(unsigned int n)
{
    unsigned int count = 0;
    while(n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}