#include <stdio.h>
void main()
{
    int n;
    printf("Enter Array Size: \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements into the array: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The Array is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n\n\n\nThe Sorted Array is : \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

