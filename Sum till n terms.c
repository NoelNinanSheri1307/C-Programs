#include <stdio.h>
int main()
{
    printf("Enter the number of numbers: ");
    int n,s=0;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("The sum of numbers till %d is %d",n,s);
}
