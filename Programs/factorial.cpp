#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"enter factorail number";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"factorail of "<<n<<" "<<" is "<<fact;
    return 0;
}