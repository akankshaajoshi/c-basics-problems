#include<iostream>
#include<string>
#include<string.h>

using namespace std;
int main()
{
    //Declaration methods

    string str = "Hello, strings!";
    string *ptr = new string("C++ is easy! {Fuck no it isn't}");
    const char mytext[] = "C++ is fun.";

    cout<<str<<endl;
    cout<<*ptr<<endl;
    cout<<mytext<<endl;
    
    //String manipulation functions
    
    //Character array manipulation
    char strcopy[70];
    char newstr1[] = "Okay so what next";
    char newstr2[] = "So this is how it is";
    strcpy(strcopy, newstr1);
    int n1 = strlen(newstr1);
    strcmp(newstr1, newstr2);
    strcat(newstr1, newstr2);
    //strupr(newstr1);
    //strlwr(newstr2);
    //getch();


    //String class manipulation
    int n2 = str.length();
    cout<<str.data()<<endl;
    //cout<<str.find('el')<<endl;
    cout<<str.size()<<endl;
    cout<<str.substr(0, 7)<<endl;
    cout<<str.append(mytext)<<endl;
    cout<<str.insert(6, "HI")<<endl;
    cout<<str.empty()<<endl;
    cout<<str.capacity()<<endl;
    str.reserve();


    //String streams are stream objects that llow a string to be used as an internal text file

    return 0;
}