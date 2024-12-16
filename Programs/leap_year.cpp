
/*or user input year check

    If year % 400 == 0
        Print Leap Year
    Else If year % 4 == 0 && year % 100 != 0
        Print Leap Year
    Else, year will be not leap*/


#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int year;
    cout<<"enter year\n";
    cin>>year;
    if(year%400==0)
     cout<<"leap year";
        else if(year%4==0 && year%100 !=0)
        cout<< "leap year";
    else
    cout<<"not a leap year";   

    return 0;
}