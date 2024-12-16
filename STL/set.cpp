#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>v={10,20,30,40,40};
    v.insert(67);
    v.insert(20);

    set<int>::iterator itr;
    cout<<"using iteratir"<<endl;
    for(itr=v.begin();itr!=v.end();itr++)
    {
        cout<<*itr<<endl;
    }
    cout<<"using for each loop"<<endl;
    for(int x:v)
    {
        cout<<x<<endl;
    }
    
}