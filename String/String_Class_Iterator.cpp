#include<iostream>
#include<algorithm>
using namespace std;

/*string::iterator
begin()
end()
reverse_iterator
rbegin()
rend()


*/


int main()
{
    string str="today";
    // string::iterator it;
    // for(it=str.begin();it!=str.end();it++)
    // {
    //     cout<<*it;
    // }


    string::reverse_iterator it;
    for(it=str.rbegin();it!=str.rend();it++)
    {
        cout<<*it;
    }

    for(int i=0;str[i]!='\0';i++)
    {
        cout<<str[i];
    }


    return 0;
}