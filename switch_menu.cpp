#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"menu"<<endl;
    cout<<"1.add\n"<<"2.sub\n"<<"3.div\n"<<"4.mul\n";
    int option;
    cout<<"enter the options";
    cin>>option;
    int a,b,c;
    cout<<"enter a and b";
    cin>>a>>b;
    switch(option)
    {
        case 1:c=a+b;
        break;

        case 2:c=a-b;
        break;

        case 3:c=a*b;
        break;

        default:
        cout<<"invalid option";
    }
    return 0;
}