#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number for table";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<"x"<<i<<"="<<n*i;
        cout<<endl;
    }
    return 0;
}
