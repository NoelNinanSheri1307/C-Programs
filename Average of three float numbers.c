#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("Enter the first float number: ");
    scanf("%f", &a);
    printf("Enter the second float number: ");
    scanf("%f", &b);
    printf("Enter the third float number: ");
    scanf("%f", &c);
    d=(a+b+c)/3.0;
    printf("The average of the three numbers %.2f,%.2f and %.2f is %.2f",a,b,c,d);
    return (0);

}
