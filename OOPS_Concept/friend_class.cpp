#include<iostream>
#include<algorithm>
using namespace std;

class my{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
   friend yours; 
};
class yours{
    my m;
   void fun(){ 
    m.a=10;
    m.b=20;
    m.c=30;
   }
};
int main()
{
    
    return 0;
}