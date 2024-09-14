#include <stdio.h>
int main()
{
    printf("Enter the number whose factorial is required:  ");
    int n,f=1;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("The Factorial of %d is %d",n,f);
}
