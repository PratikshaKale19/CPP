#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    string branch;
    friend ofstream & operator<<(ofstream &ofs,student &s);
     // friend ifstream & operator>>(ifstream &ifs,student &s);
};
ofstream & operator<<(ofstream &ofs,student &s)
{
    ofs<<s.name<<endl;
    ofs<<s.rollno<<endl;
    ofs<<s.branch<<endl;
}

int main()
{
    student s1;
    s1.name="pratiksha";s1.rollno=10;s1.branch="it";
    ofstream ofs("student.txt",ios::trunc);
    ifstream ifs("student.txt");
    ofs<<s1;
    //ifs>>s1;
}