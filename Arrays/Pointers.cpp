#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    
    int x=10;
    int *p=&x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;


//pointer does not depends upon the datatypes
    // int *p;
    // double *q;
    // int x=sizeof(p);
    // cout<<x<<endl;
    // double y=sizeof(q);
    // cout<<y<<endl;


    // int A[]={2,4,6,8,10,12};
    // int *p=&A[3];
    // cout<<p[-2];    

    return 0;
}