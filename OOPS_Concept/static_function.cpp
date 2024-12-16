#include<iostream>
#include<algorithm>
using namespace std;

//static can be colled by class name;
class student
{
    public:
       int roll;
       string name;
       static int addno;
     student(string n)
     {
        addno++;
        roll=addno;
        name=n;
     }  
     void display()
     {
        cout<<"Name"<<name<<endl<<"roll"<<roll<<endl;
     }
};
int student::addno=0;
int main()
{
    student s1("pratiksha");
    student s2("nihal");
    student s3("vedant");
    s1.display();
    s3.display();

    cout<<"number of addmission"<<student::addno<<endl;
    
    
    return 0;
}