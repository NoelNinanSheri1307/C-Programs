#include <stdio.h>
int main()
{
    int n,i,j,k,l,temp;
    printf("Enter the length of the array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element: ");
        scanf("%d",&a[i]);
    }
    printf("The array before swapping elements: ");
    for(l=0;l<n;l++)
    {
        printf("%d ",a[l]);
    }
    for(j=0;j<=n/2;j++)
    {
        temp=a[j];
        a[j]=a[n-j-1];
        a[n-j-1]=temp;
    }
    printf("The array after swapping elements: ");
    for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
}
