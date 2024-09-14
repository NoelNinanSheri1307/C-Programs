#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter the three numbers as a b c \n");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)?((a>c?a:c)):((b>c)?b:c);
    printf("The biggest number among all three entered numbers %d , %d and %d is %d",a,b,c,max);
    return (0);
}
