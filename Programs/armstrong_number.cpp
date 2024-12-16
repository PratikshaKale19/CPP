#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,sum=0,cube=0;
    int temp=n;
    n=153;
    while(n!=0)
    {
        int r=n%10;
        cube=r*r*r;
        sum=sum+cube;  //sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==temp)
    {
        cout<<"armstrong number";
    }
    return 0;
}