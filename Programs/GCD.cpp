#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int m,n;
    cout<<"enter the 2 number";
    cin>>m>>n;
    while(m!=n)
    {
        if(m>n)
          m=m-n;
        else if(n>m)
          n=n-m;  
    }
    cout<<m;
    return 0;
}