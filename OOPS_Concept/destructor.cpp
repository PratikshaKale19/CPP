#include<iostream>
#include<algorithm>
using namespace std;

class Demo
{
    int *p;
    public:
    Demo()
    {
        cout<<"constructor of demo is colled"<<endl;
    }

    ~Demo()
    {
        delete[]p;
        cout<<"destructor of demo is colled"<<endl;
    }
   
};
 void fun()
    {
       Demo *p=new Demo();
       delete p;
    }
int main()
{
    fun();
    
    return 0;
}
