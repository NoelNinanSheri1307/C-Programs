#include <stdio.h>
void main()
{
    printf("Even numbers between 2 and 50 are: \n");
    for (int i=2;i<=50;i++)
    {
        if (i%2==0)
        {
            printf("%d  ",i);
        }
    }
}
