#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int A[]={10,20,30,40,50,60};
    int l=0,h=6;
    int key;
    cout<<"enter thr key";
    cin>>key;

    while(l<=h)
    {
    int mid=(l+h)/2;
    if(key==A[mid])
    {
      cout<<"key found at mid"<<mid;
       return 0;
    } 
    else if(key>A[mid])
    {
        l=mid+1;
    }
    else
    h=mid-1;
    }
    cout<<"not found"; 
   
}