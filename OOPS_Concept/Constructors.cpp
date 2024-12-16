#include<iostream>
#include<algorithm>
using namespace std;

class Rectangle
{
private:
    int length,breadth;
public:
    // Rectangle()
    // {
    //     length=1;
    //     breadth=1;
    // }
    Rectangle(int l=1,int b=1)
    {
        setlength(l);
        setbreadth(b);
    }
    Rectangle(Rectangle &r)
    {
        length=r.length;
        breadth=r.breadth;
    }
    int area()
    {
       return length*breadth;
    }
    void setlength(int l)
    {
        if(l>0)
          length=l;
        else
          length=1;  
    }
    void setbreadth(int b)
    {
        breadth=b;
    }
};

int main()
{
    Rectangle r(10,20);
    Rectangle r2(r);
    cout<<&r;
    cout<<&r2;
    cout<<r.area()<<endl;
    //cout<<r2.area()<<endl;
    
    return 0;
}