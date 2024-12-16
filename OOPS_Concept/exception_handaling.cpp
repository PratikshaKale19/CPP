#include<iostream>
#include<algorithm>
using namespace std;


int main()
{
    try{
    int x=10,y=2,z;
    if(y==0)
      throw 1;
    z=x/y;
    cout<<z<<endl;
    }
    catch(int e)
    {
        cout<<"division by zero"<<e;
    }
    cout<<"bye";
    return 0;
}