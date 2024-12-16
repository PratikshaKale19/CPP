#include<iostream>
#include<algorithm>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
int add(int a,int b,int c)
{
    return a+b+c;
}
float add(float a,float b)
{
    return a+b;
}

//return type is not consider in function overloading.
// float add(int a,int b)
// {
//     return a+b;
// }

int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(10,20,30)<<endl;
    cout<<add(9.5f,9.6f)<<endl;
    
    
    return 0;
}