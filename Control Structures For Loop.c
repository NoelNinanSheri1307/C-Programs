#include <stdio.h>
int main()
{
    printf("Enter the number whose multiplication table is required: ");
    int n,q;
    scanf("%d",&n);
    for(int i=1;i<=10;i++)
    {
        q=n*i;
        printf("%d * %d = %d  \n",i,n,q);
    }
}
