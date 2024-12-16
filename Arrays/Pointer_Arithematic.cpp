#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int A[5]={1,2,3,4,5};
    int *p=A;
    

    //  cout<<*p<<endl;
    //  p++;
    //  cout<<*p<<endl;
    //  p--;
    //  cout<<*p<<endl;

    // cout<<*p<<endl;
    // cout<<*p+2<<endl;


    for(int i=0;i<5;i++)
    {
        //cout<<A[i]<<end;
        //cout<<i[A]<<endl;
        //cout<<A+i<<endl;
        //cout<<*p+i<<endl;
        cout<<p[i]<<endl;

    }

    return 0;
}