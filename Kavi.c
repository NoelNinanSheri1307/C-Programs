#include <stdio.h>
void main()
{
    printf("Customer name: Kaviyarasu .P\n");
    printf("Customer ID: 23MFI0001\n");
    int u;
    printf("Enter the total number of units of electricity used: \n");
    scanf("%d",&u);
    int amt=50;
    float tamt;
    float GST=0.09;
    if (u<=50)
        tamt=0;
    else if(u>=50&&u<=150)
        tamt=10*100;
    else if(u>=150&&u<=250)
        tamt=10*(100)+20*(100);
    else if(u>250)
        tamt=10*(100)+20*(100)+30*(u-250);
    tamt+=amt;
    tamt+=tamt*GST;

    printf("The total amount for %d units of electricity is %f",u,tamt);
}
