#include<iostream>
#include<algorithm>
using namespace std;

//abstract class
//1.we cannot create the object of the abstract class.
//2.we can craete pointer of the abstract class 
class car{

   public:
   virtual void start()=0;   //pure virtual function....is colled abstract class.
    
   virtual void stop()=0;
   
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

    
    return 0;
}