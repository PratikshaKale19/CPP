#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int>v={10,20,30,40};
    v.push_back(20);
    v.push_back(30);
    v.pop_back();

    list<int>::iterator itr;
    cout<<"using iteratir"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<++*itr<<endl;
    }
    cout<<"using for each loop"<<endl;
    for(int x:v)
    {
        cout<<x<<endl;
    }
    
}