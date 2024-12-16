#include<iostream>
#include<algorithm>
using namespace std;

void display()
{
    cout<<"hi";
}
int main()
{

    void (*fp)();       //........declaration
    fp=display;        //.........init
    (*fp)();            //.........call
    
    return 0;
}