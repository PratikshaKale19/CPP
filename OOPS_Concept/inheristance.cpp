#include<iostream>
#include<algorithm>
using namespace std;

class Base
{
   public:
     void display()
     {
        cout<<"hi";
     }
};
class derived:public Base{

};

int main()
{
    derived b;
    b.display();

    
    return 0;
}