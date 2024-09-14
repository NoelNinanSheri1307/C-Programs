//This program is to print Armstrong numbers between 1 to n.
#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    printf("Enter the value of n: \n");
    scanf("%d",&n);
    printf("The Armstrong Numbers between 1 and %d is :\n",n);
    for(int i=1;i<=n;i++)
    {
        if(i<10)
        {
            printf("%d\t",i);
        }
        else
        {
            int temp1=i,temp2=i;
            int s=0;
            int c=0;
            while(temp1!=0)
            {
                c++;
                temp1=temp1/10;
            }
            while(temp2!=0)
            {
                int dig;
                dig=temp2%10;
                s=s+pow(dig,c);
                temp2=temp2/10;
            }
        if(s==i)
        {
            printf("%d\t",i);
        }
        }
    }
}
