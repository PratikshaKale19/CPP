#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str="PRATIKSHA";
    
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
           str[i]=str[i]+32;
        }
    }
    cout<<str;
    return 0;
}