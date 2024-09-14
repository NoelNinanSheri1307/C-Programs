#include <stdio.h>
int main()
{
    int a,b,i,max,lcm,lim;
    printf("Enter the two numbers as a b: ");
    scanf("%d%d",&a,&b);
    if ((a<=0 && b<=0)||(a<=0)||(b<=0))
    {
        printf("Please enter only positive non zero integers");
    }
    else
    {
        max=(a>b)?a:b;
        lim=a*b;
        for(i=max;i<=lim;i++)
        {
            if( (i%a==0) && (i%b==0))
            {
                lcm=i;
                printf("The Lowest Common Multiple of the entered numbers %d and %d is %d",a,b,lcm);
                break;
            }
        }
    }

}
