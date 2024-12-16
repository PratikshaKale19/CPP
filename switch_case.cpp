#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int day;
    cout<<"enter the day";
    cin>>day;
    switch(day)
    {
        case 1:cout<<"mon";
        break;

        case 2:cout<<"Tue";
        break;

        case 3:cout<<"wed";
        break;

        case 4:cout<<"thru";
        break;

        case 5:cout<<"fri";
        break;

        case 6:cout<<"sat";
        break;

        case 7:cout<<"sun";
        break;

        default:
        cout<<"invalid day";
    }
    return 0;
}