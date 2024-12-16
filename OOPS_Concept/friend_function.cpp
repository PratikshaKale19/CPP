#include<iostream>
#include<algorithm>
using namespace std;

class Test{
    private:
     int a;
    protected:
     int b;
    public:
     int c;
     Test(int a , int b , int c){
        this->a = a;
        this->b=b;
        this->c = c;

     }
friend void fun(Test temp); 
};
void fun(Test temp)
{
        cout<<temp.a<<endl;
        cout<<temp.b<<endl;
        cout<<temp.c<<endl;
    
}

int main()
{
        Test t(1, 2 ,3);
        fun(t);

    return 0;
}