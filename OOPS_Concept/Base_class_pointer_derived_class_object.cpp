#include<iostream>
#include<algorithm>
using namespace std;

/*
   Baseclass pointer derived class object- we can access only base class function not allowed to access 
   derived class function.

   Derived class pointer and base class object-is not allowed.
*/

class Base{
    public:

    void fun1()
    {
        cout<<"fun1 of base"<<endl;
    }
};
class Derived:public Base{
    public:

    void fun2()
    {
        cout<<"fun2 of derived "<<endl;
    }
};
int main()
{
    Derived d;
    Base *ptr=&d;
    ptr->fun1(); 
    
      
    return 0;
}