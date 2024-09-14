#include <stdio.h>
int main()
{
    int a,b,hcf,i,min;
    printf("Enter the two numbers as a b: ");
    scanf("%d%d",&a,&b);
     if ((a<=0 && b<=0)||(a<=0)||(b<=0))
    {
        printf("Please enter only positive non zero integers");
    }
    else
    {
        min=(a>b)?b:a;
        for(i=min;i>=1;i--)
        {
            if ((a%i==0)&&(b%i==0))
            {
                hcf=i;
                printf("The highest common factor of the entered numbers %d and %d is %d",a,b,hcf);
                break;
            }
        }
    }
    return(0);

}
