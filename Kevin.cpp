#include<iostream>
using namespace std;
class one
{
    int x;
    public:
        void get()
        {
            cout<<"Enter the value of X: "<<endl;
            cin>>x;
        }
        void show()
        {
            cout<<"The value of X is: "<<x<<endl;
        }
       friend one operator +(one m,one n);
};
one operator +(one m,one n)
        {
           one res;
           res.x=m.x-n.x;
           return res;
        }
int main()
{
    one s,t,u;
    t.get();
    u.get();
    s=t+u;
    s.show();
    return 0;
}
