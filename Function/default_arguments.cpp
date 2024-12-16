#include<iostream>
#include<algorithm>
using namespace std;


int max1(int a,int b=0,int c=0)
{
    return a>b && a>c ? a:(b>c?b:c);
}
int main()
{
    cout<<max1(10,90);
    
    return 0;
}