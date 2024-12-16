#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    
    int n=124,sum=0;
    int temp=n;
    while(n>0)
    {
        int r=n%10;
        sum=(sum*10)+r;
        n=n/10;
        
    }

    cout<<sum;
    // if(temp==sum)
    // {
    //     cout<<"palindrome";
    // }
    // else
    // cout<<"not palindrome";
    return 0;
}