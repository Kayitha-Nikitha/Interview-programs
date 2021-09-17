#include<stdio.h>
void modify(int *a)
{
    *a=10;
    a=NULL;
}

int main()
{
    int x=5;
    int *p=&x; //assume p=0XFFFF
    printf("%p %u\n",p,x);
    modify(p);
    p=NULL;
    printf("%p %u\n",p,x);
    return 0;
}

/* Output before making p as NULL
0x7fff11f61164 5
0x7fff11f61164 10
*/