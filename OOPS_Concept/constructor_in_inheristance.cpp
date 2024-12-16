#include<iostream>
#include<algorithm>
using namespace std;
/*

1.when we create the derived class object...
first base class default  constructor is colled than derived calss default constructor is colled
when we want to colled parameterized constructor of the base class we have to write the constructor in the derived class
Derived(int x,int y):Base(x)
    {
         cout<<"param of derived"<<y<<endl;
     }

*/

class Base{
    public:
    Base()
    {
        cout<<"non-param base"<<endl;
    }
    Base(int x)
    {
        cout<<"param of base"<<x<<endl;
    }
};
class Derived:public Base{
    public:
    Derived()
    {
        cout<<"non-param of derived class"<<endl;

    }
    Derived(int y)
    {
        cout<<"param-of derived"<<y<<endl;
    }
    Derived(int x,int y):Base(x)
    {
         cout<<"param of derived"<<y<<endl;
     }
};
int main()
{
    
    
    Derived d(10,20);

    
    return 0;
}