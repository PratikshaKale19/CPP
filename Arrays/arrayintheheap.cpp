#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int size;
   
    int *p=new int [10];
    p[0]=1;
    p[1]=2;
    p[9]=20;
    cout<<p[9]<<endl;


    delete[]p;
    p=nullptr;
    return 0;
}