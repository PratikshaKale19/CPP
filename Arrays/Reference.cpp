#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

    //what is refernce??
    //1.nickname or alias name to the varaible
    //2.it does not have any separate memory.
    //3.it must be intailized at a time of the decalaration.
    int a=7;
    int &y=a;
    cout<<y<<endl;
    y++;
    cout<<a<<endl;
    a--;
    cout<<y<<endl;
    cout<<&a<<" "<<&y<<endl;
    return 0;
}