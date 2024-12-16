#include<iostream>
#include<algorithm>
using namespace std;

/*
inbulit function on string
1.s.length()
2.s.size();
3.s.capacity();
4.s.resize();
5.s.max_size();
6.s.clear();
7.s.empty();
8.s.append("bye");
9.s.insert(3,"kk");
10.s.replace(3,5,"aa");
11.s.erase();
12.s.push_back('A')..........single character
13.s.pop_back()
14.s.swap();
15.s.copy(char des[]);
16.s.find(str)
17.s.rfind(str)
18.s.find_first_of();
19.s.find_last_of();
20.s.substr(start,number)
21.s.compare(str)
22.s.at();
front()
back();
[]
+
=



*/

int main()
{
    string str="Pratiksha";
    string str1="kale";
   // cout<<"enter the string";
    //cin>>str;
    //getline(cin,str);
   cout<< str.length()<<endl;
    cout<< str.size()<<endl;
    cout<<str.capacity()<<endl;
     cout<< str.append("Kale")<<endl;
      cout<< str.replace(3,5,"mirafra")<<endl;
     str.push_back('A');
     cout<<str<<endl;
    str.swap(str1);
    cout<<str<<endl;
    //cout<<str;
    
    return 0;
}