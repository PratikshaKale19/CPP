#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;

int main()
{
    ifstream infile;
    infile.open("my.txt");
    if(infile)cout<<"file is opened"<<endl;
    string name;
    int roll;
    string branch;

    infile>>name>>roll>>branch;
    cout<<"name"<<name<<endl;
    cout<<"roll"<<roll<<endl;
    cout<<"branch"<<branch<<endl;
    
    return 0;
}