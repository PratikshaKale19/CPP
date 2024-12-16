#include<iostream>
#include<algorithm>
using namespace std;

class Base{

    public:
    void display()
    {
        cout<<"base class "<<endl;
    }
};
class Derived:public Base{

    public:
    void display()
    {
        cout<<"derived class"<<endl;
    }
};
int main()
{

    Derived d;
    d.display();
    //d.Base::display();
    
    return 0;
}