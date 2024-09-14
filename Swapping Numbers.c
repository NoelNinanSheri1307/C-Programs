#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the two numbers as a b \n");
    scanf("%d%d",&a,&b);
    printf("a = %d and b = %d \n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("The numbers after changing ----->  a=%d and b=%d",a,b);
    return(0);


}
