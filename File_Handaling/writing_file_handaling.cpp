#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;

int main()
{
    ofstream outfile("my.txt");
    outfile<<"Pratiksha"<<endl;
    outfile<<3<<endl;

    outfile.close();

    return 0;
}
