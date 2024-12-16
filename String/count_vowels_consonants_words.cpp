#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string str="hoW Many wOrds";
    int vowel=0,consonant=0,space=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='A' || str[i]== 'E'|| str[i]== 'I'|| str[i]== 'O'||str[i]== 'U'|| 
        str[i]== 'a'|| str[i]== 'e'|| str[i]== 'i'|| str[i]== 'o'|| str[i]== 'u')
        {
            vowel++;
        }
        
        else if( str[i]== ' ')
        {
            space++;
        }
        else
         consonant++;
        
    }
    cout<<"Vowels"<<vowel<<endl;
    cout<<"Space"<<space<<endl;
    cout<<"words"<<space+1<<endl;
    cout<<"consonant"<<consonant<<endl;
    return 0;
}