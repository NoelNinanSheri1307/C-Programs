#include <stdio.h>
int main()
{
    int i,n,f=1;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    printf("The factorial of entered number %d is %d\n",n,f);
    for(int j=1;j<=f;j++)
    {
        if(f%j==0)
        {
            printf("%d\t",j);
        }
    }
}
