#include<bits/stdc++.h>
using namespace std;
//lamda expression: useful for definning unnamed function



int main(){
    [](){cout<<"hello"<<endl;}();

    [](int x,int y){cout<<"sum:"<<x+y;}(10,20);
    cout<<endl;

    cout<<([](int x,int y){return x+y;}(10,90));
    cout<<endl;

    int a=[](int x,int y){return x+y;}(10,100);
    cout<<a<<endl;


     int b=[](int x,int y)->int{return x+y;}(100,100);
    cout<<b<<endl;

    //to access the local variable
     int p=10;
     int q=20;
     [p](){cout<<p<<endl;}();

     auto z=[&q](){cout<<q<<endl;}; 
     z();
     q++;
     z();




    return 0;
}