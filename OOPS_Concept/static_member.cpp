#include<iostream>
#include<algorithm>
using namespace std;

class Test{
    private:
    int a;
    int b;
    public:
    static int count;
    Test()
    {
        a=10;
        b=10;
        count++;
    }
};
int Test::count=0;
int main()
{
    Test t;
    Test t2;
    cout<<t.count<<endl;
    cout<<t2.count<<endl;
    
    return 0;
}