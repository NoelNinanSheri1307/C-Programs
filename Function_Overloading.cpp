#include <iostream>
using namespace std;
void area(float x);
void area(float l,float w);
void area(int b,int h);
void area(int s);
void area(float x)
{
    cout<<"The area of the given circle of radius "<<x<<" is "<<3.14*x*x<<endl;
}
void area(float l, float w)
{
    cout<<"The area of rectangle with length "<<l<<" and breadth "<<w<<" is "<<l*w<<endl;
}
void area(int b,int h)
{
    cout<<"The area of the triangle with base "<<b<<" and height "<<h<<" is "<<0.5*b*h<<endl;
}
void area(int s)
{
    cout<<"The area of the square with side "<<s<<" is "<<s*s<<endl;
}
int main()
{
    area(float(5.67));
    area(float(9.34),float(8.54));
    area(int(8),int(9));
    area(4);
    return 0;
}
