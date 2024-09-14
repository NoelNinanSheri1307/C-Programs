#include <stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    for(j=n-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
}
