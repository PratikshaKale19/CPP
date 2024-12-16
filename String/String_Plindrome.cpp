#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str="maDaM";
    string rev="";
     
     for(int i=0;str[i]!='\0';i++)
     {
         if(str[i]>=97 && str[i]<=122)
           str[i]=str[i]-32;
     }
    
    
    for(int i=str.length()-1;i>=0;i--)
    {

        rev=rev+str[i];
    }
    cout<<rev<<endl;

    if(rev==str)
    {
        cout<<"plaindrome"<<endl;
    }
    else
    cout<<"not palindrome"<<endl;
    return 0;
}