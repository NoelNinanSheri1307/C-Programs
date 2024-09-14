#include <stdio.h>
int main()
{
    int c,f;
    printf("Enter the temperature in celsius: ");
    scanf("%d",&c);
    f=1.8*c+32;
    printf(" The temperature in fahrenheit is %d F",f);
}
