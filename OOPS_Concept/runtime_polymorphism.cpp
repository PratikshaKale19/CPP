#include<iostream>
#include<algorithm>
using namespace std;

class car{

    public:
   virtual void start()
    {
        cout<<"car started"<<endl;
    }
   virtual void stop()
    {
        cout<<"car stopped"<<endl;
    }
};
class BMW:public car{
    public:
    void start()
    {
        cout<<"BMW started"<<endl;
    }
    void stop()
    {
        cout<<"BMW stopped"<<endl;
    }
};
class swift:public car{
    public: 
    void start()
    {
        cout<<"swift started"<<endl;
    }
    void stop()
    {
        cout<<"swift stopped"<<endl;
    }
};
int main()
{

    car *ptr=new BMW();
    ptr->start();
     ptr=new swift();
     ptr->start();
     delete ptr;

    
    return 0;
}