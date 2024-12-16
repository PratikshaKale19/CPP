#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int m1,m2,m3;

    cout<<"enter the marks";
    cin>>m1,m2,m3;
    int total=m1+m2+m3;
    float avg=total/3;
    if(avg>=60)
     cout<<"A GRADE";
    else if(avg<=35 && avg<60)
       cout<<"B";
    else
     cout<<"C";
       

    return 0;
}