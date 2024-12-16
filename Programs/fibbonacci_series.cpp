#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a=0,b=1;
    cout<<a<<","<<b<<",";
    for(int i=2;i<15;i++)
    {
        int c=a+b;
        a=b;
        b=c;
        cout<<c<<",";

    }

    return 0;
}