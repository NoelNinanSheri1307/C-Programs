#include <iostream>
using namespace std;
class Base
 //Abstract base class
{
public:
virtual void show() = 0;
};
class Derived:public Base
{
public:
void show()
//Pure Virtual Function
{ cout << "Implementation of Virtual Function in Derived class"; }
};
main()
{
//Base obj;
Base *b;
Derived d;
b = &d;
b->show();
}
