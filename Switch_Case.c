#include <stdio.h>
int main()
{
    int ch,side,sqarea,l,b,rectarea;
    float r,circarea;
    printf("SWITCH CASE PROGRAM \n Please choose from any of the given options. \n 1.Area of a square \n 2.Area of a rectangle \n 3.Area of a circle.\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("Enter the value of the side of the square: \n");
        scanf("%d",&side);
        sqarea=side*side;
        printf("Area of the square with side %d is %d",side,sqarea);
        break;

        case 2:
        printf("Enter the value of the length of the rectangle: \n");
        scanf("%d",&l);
        printf("Enter the value of the breadth of the rectangle: \n");
        scanf("%d",&b);
        rectarea=l*b;
        printf("Area of the rectangle with length %d and breadth %d is %d",l,b,rectarea);
        break;

        case 3:
        printf("Enter the value of the radius of the circle: \n");
        scanf("%f",&r);
        circarea=3.14*r*r;
        printf("Area of the circle with radius %f is %f",r,circarea);
        break;

        default:printf("Invalid Choice /n");
    }
}
