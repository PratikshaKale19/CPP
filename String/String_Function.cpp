#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;


/*1.strlen-length of string
  2.strcat-concat two string
  3.strcpy-cpy
  4.strstr
  5.strcmp*/

int main()
{
    //length function strlen(s);

    char s[30]="hello";
    cout<<strlen(s);

    char name[100];
    cout<<"enter the string";
    //cin>>name;
    cin.getline(name,50);
    cout<<"length"<<strlen(name)<<endl;

    //concatenation of string function strcat(source,destination)


    char s1[20]="Hello";
    char s2[20]="hello";

    // strcat(s1,s2);
    // cout<<s1;
   
   //concatenate strncat(source,destination,length)

//    strncat(s1,s2,4);
//    cout<<s1;

   //strcpy(s2,s1);
   //cout<<s2;

   //cout<<strstr(s1,s2);
   cout<<strcmp(s1,s2);



    return 0;
}