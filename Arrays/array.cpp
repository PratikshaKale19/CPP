#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    /*float A[5]={1,3.5f,6.7f};       
    for(int i=0;i<5;i++)
     {
         cout<<A[i]<<endl;
     }*/





    // char A[]={'a','n'};
    // for(auto x:A)
    // {
    //     cout<<x<<endl;
    // }

 int A[]={1,2,3,4,5};
     for(int i:A)
     {
         cout<<++i;
     }                                  


    return 0;
}