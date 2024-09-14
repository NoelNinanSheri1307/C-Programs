#include <stdio.h>
int main()
{
    int a=23,b=34;
    printf("The numbers before swapping are a=%d and b=%d \n",a,b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("The numbers after swapping are a=%d and b=%d",a,b);
    return(0);
}
