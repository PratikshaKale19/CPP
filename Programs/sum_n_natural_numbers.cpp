#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"enter the number";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        sum=sum+i;
        //cout<<sum;
    }
    cout<<sum;
    return 0;
}