#include<iostream>
#include<algorithm>
using namespace std;

/*
int max(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;
}
float max(float a,float b)
{
    if(a>b)
    return a;
    else
    return b;
}
*/
template <class T>
T max1(T a,T b)
{
    if(a>b)
    return a;
    else
    return b;
}

int main()
{
    cout<<max1(10,20)<<endl;
    cout<<max1(9.0f,4.8f)<<endl;
    cout<<max1(10.0,8.0)<<endl;
    
    return 0;
}