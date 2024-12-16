#include<bits/stdc++.h>
using namespace std;
//shared pointer-more than one  pointer can only point to the single object only..
//it maintain the reference counter to store the number of pointer pointing to the same object.
//ref_counter=2;
//use_count() to count the ref_counter
class Rectangle{
    int length;
    int breadth;
    public:
    Rectangle(int l,int b)
    {
        length=l;
        breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
};
int main(){
    shared_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout<<ptr->area();
    shared_ptr<Rectangle> ptr2;
    ptr2=ptr;
    cout<<"ptr2"<<ptr2->area()<<endl;
    cout<<ptr.use_count()<<endl;
    
    return 0;
}