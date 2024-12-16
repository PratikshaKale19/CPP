#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    int n,count=0;
    n=12345;
    while(n>0)
    {
        count++;
        n=n/10;

    }
    cout<<count;
    return 0;
}