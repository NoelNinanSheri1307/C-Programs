#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of buildings:  \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the heights of the buildings: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int stamina=a[0];
    for(int i=1;i<n;i++)
    {
        if (a[i]>a[i-1])
        {
        stamina=stamina^a[i];
        }
        else
        {
            break;
        }
    }
    printf("Stamina is :\n");
    printf("%d  ",stamina);
    printf("(");
    printf("%d",a[0]);
    for(int i=1;i<n;i++)
    {
        printf("^%d",a[i]);
    }
    printf("=%d",stamina);
    printf(")");
}
