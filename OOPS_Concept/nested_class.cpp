#include<iostream>
#include<algorithm>
using namespace std;
class outer
{

    void fun()
    {
        i.display();
    }
    public:

    class inner
    {
        public:
           void display()
           {
             cout<<"display of inner";
           }
    };
    inner i;
};
int main()
{
  outer::inner i;
    
    return 0;
}