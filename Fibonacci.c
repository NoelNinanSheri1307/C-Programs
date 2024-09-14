//Program to print n terms of Fibonacci sequence
#include <stdio.h>
void main()
{
    int n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    int a=0,b=1,f=0;
    printf("The Fibonacci Sequence of Numbers till %d terms is : \n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d\t",f);
        a=b;
        b=f;
        f=a+b;
    }
}
