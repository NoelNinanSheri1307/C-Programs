#include <stdio.h>
#include <math.h>
int main()
{
    int n,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    printf("The Armstrong Numbers between 0 and %d is : \n",n);
    for(i=0;i<=n;i++)
    {
        if (i==0 || i==1)
            {
                printf("%d \t",i);
            }
        else
            {
            int s=0,c=0,dig;
            int temp=i;
            int temp2=i;
            while(temp2!=0)
            {
                c+=1;
                temp2=temp2/10;
            }
            while(temp!=0)
            {
                dig=temp%10;
                s+=pow(dig,c);
                temp=temp/10;
            }
            if (s==i)
            {
                printf("%d \t",i);
            }
            }

    }
}
