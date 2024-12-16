#include<bits/stdc++.h>
using namespace std;

int main(){
    forward_list<int>v={10,20,30,40};
    v.push_front(30);
    v.push_front(80);
    v.pop_front();

    forward_list<int>::iterator itr;
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