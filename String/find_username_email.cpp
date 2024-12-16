#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str="kalepathu19@gmail.com";
    string usernsme="";
    for(int i=0;str.length();i++)
    {

        if(str[i]=='@')
        break;
        usernsme=usernsme+str[i];
    }
    cout<<str<<endl;
    cout<<usernsme<<endl;
    return 0;
}