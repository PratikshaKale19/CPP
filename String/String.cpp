#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    char s[10]="Pratiksha";
    cout<<s<<endl;
    
    char p[]={'h','e','l','l','o','\0','p'};
    cout<<p<<endl;

    char q[]={65,66,67,97,0,68};
    cout<<q<<endl;

    char *p1="hello";
    cout<<p1<<endl;

    char name[100];
    cout<<"enter the name";
    //cin>>name;
    cin.getline(name,100);
    cout<<name;


    return 0;
}