#include<iostream>
#include<algorithm>
using namespace std;
namespace First{
void fun()
{
    cout<<"First"<<endl;
}

};

namespace Second{
void fun()
{
    cout<<"second "<<endl;
}
};

using namespace First;
int main()
{

    fun();
    Second::fun();
    
    return 0;
}