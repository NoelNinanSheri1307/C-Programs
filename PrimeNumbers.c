#include <stdio.h>
int main()
{
    int n,i;
    printf("Enter the vale of n: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if (i==2)
        {
            printf("%d \t",i);
        }
        else
        {
                int flag=0;
            for(int j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=2;
                    break;
                }
            }
            if (flag==0)
            {
                printf("%d \t",i);
            }
        }
    }
}
