#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
   
    int arr[]={10,20,30,40,50};
    int sum=0;
    // for(int i:arr)
    // {
    //     sum=sum+i;
        
    // }

    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}