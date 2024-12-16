#include<iostream>
#include<algorithm>
using namespace std;
/*

1.when we create base class pointer and derived class object the base class function is colled...
if we want derived class function we will do it by virtual function to the base class function than derived function is colled. 

*/
class Base{
    public:
      virtual void display()
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
    //Derived d;
    //Base *ptr= &d;
    Base *ptr=new Derived();
    ptr->display();
    
    return 0;
}