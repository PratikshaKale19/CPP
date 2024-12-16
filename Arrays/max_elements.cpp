#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int A[]={10,20,30,40};
    int max=A[0];
    // for(int i=1;i<4;i++)
    // {
    //     if(A[i]>max)
    //     {
    //         max=A[i];
            
    //     }
        
    // }
    
    // cout<<max;

for(int i:A)
{
    if(i>max)
    {
        max=i;
    }
}
cout<<max;


    return 0;
}