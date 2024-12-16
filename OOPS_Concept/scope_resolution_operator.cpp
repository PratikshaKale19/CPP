#include<iostream>
#include<algorithm>
using namespace std;

class Rectangle
{
   public:
     int length,breadth;
    public:  
    
    int area()
    {
        return length*breadth;
    }
    int perimeter();
    
};
int main()
{
    Rectangle r;
    r.length=10;
    r.breadth=20;
    cout<<r.area();
    return 0;
}
int Rectangle::perimeter()
{
   return 2*(length+breadth);
}
