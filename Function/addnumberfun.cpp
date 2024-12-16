#include<iostream>
#include<algorithm>
using namespace std;


int add(int a,int b)
{
    int c;
    c=a+b;
    return c;
}


int main()
{
    int a=10,b=20;
    int c=add(a,b);
    cout<<c;
    return 0;
}