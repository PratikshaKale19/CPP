#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,string>m;
    m.insert(pair<int,string>(1,"pratiksha"));
    m.insert(pair<int,string>(2,"ashwini"));
    m.insert(pair<int,string>(3,"sandhya"));
     m.insert(pair<int,string>(4,"sayali"));


     map<int,string>::iterator itr;
     for(itr=m.begin();itr!=m.end();itr++)
     {
        cout<<itr->first<<" "<<itr->second<<endl;
     }

       map<int,string>::iterator itr1;
       itr1=m.find(4);
       cout<<"value found is"<<endl;
       cout<<itr1->first<<" "<<itr1->second<<endl;
    return 0;
}