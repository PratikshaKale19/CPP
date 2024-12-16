#include<iostream>
#include<algorithm>
using namespace std;

class complex{
    public:
    int real,img;
    complex(int r=0,int i=0)
    {
        real=r;
        img=i;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }
};
int main()
{
    complex c1,c2,c3;
    c1.real=5;
    c1.img=3;
    c2.real=12;
    c2.img=10;
    c3=c1+c2;
    cout<<c3.real<<"+i"<<c3.img<<endl;
    return 0;
}