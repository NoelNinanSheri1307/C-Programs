#include <stdio.h>
int main()
{
    int n,dig,s,temp;
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        dig=n%10;
        s=s+(dig*dig*dig);
        n=(n/10);
    }
    if (temp==s)
    {
        printf("The entered number %d is an Armstrong Number",temp);
    }
    else
    {
        printf("The entered number %d is not an Armstrong number",temp);
    }
}
