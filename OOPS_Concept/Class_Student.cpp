#include<iostream>
#include<algorithm>
using namespace std;


class Student{
    public:
      int rollno;
      int cpp,java,net;
      string name;
    Student(int rollno,int cpp,int java,int net,string name)
    {
        this->rollno=rollno;
        this->cpp=cpp;
        this->java=java;
        this->net=net;
        this->name=name;
    }
    int totalmarks()
    {
        return cpp+java+net;
    }
    char grade()
    {
        float avg=totalmarks()/3;
        if(avg>60)
        {
            return 'A';
        }
        else if(avg>=40 && avg<60)
        {
            return 'B';
        }
        else
           return 'C';
    }

};
int main()
{
    int rollno,cpp,java,net;
    string name;
    cout<<"enter the name and roll no of the students"<<endl;
    cin>>name>>rollno;
    cout<<"enter the 3 subject mark"<<endl;
    cin>>cpp>>java>>net;
    Student s(rollno,cpp,java,net,name);
    cout<<"total marks"<<s.totalmarks()<<endl;
    cout<<"grade"<<s.grade()<<endl;
    
    return 0;
}