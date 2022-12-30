#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    enum day{Sunday=1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    for (int Day = Sunday; Day<=Saturday; Day++)
    {
        cout<<"Day of the week is: "<<Day<<endl;
    }
    cout<<endl;
    return 0;
}