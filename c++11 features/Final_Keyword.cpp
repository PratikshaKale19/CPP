#include<bits/stdc++.h>
using namespace std;
//final keyword is used to restrict the inheristance 
//final keyword is used to restrict the method overriding 
int main(){
    class Parent //final
    {
        void show() //final
        {

        }

    };
    class Child:Parent
    {
        void show()
        {

        }

    };
    return 0;
}