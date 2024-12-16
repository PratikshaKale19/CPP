#include<iostream>
#include<algorithm>
using namespace std;


class Rectangle
{
private:
    int length,breadth;

public:

    
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length*breadth);
    }
    void setlength(int l)   //mutator
    {
        if(l>0)
        {
            length=l;
        }
        else
          length=1;
    }
    void setbreadth(int b)
    {
        if(b>0)
       breadth=b;
       else
       breadth=1;
    }
    int getlength()     //accessor
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
};
int main()
{

    Rectangle r;
    r.setlength(10);
     r.setbreadth(2);
     cout<<r.getlength()<<endl;
     cout<<r.getbreadth()<<endl;
    cout<<r.area()<<endl;
    
    return 0;
}