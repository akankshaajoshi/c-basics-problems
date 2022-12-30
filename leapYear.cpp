#include<iostream>
#include<cctype>
using namespace std;
void isLeapYear(int year);
int main()
{
    int year;
    cout<<"Enter the year of your choice:\n";
    cin>>year;
    isLeapYear(year);
    return 0;
}
void isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 != 0)
    {
        cout<<"Leap year"<<endl;
    }
    else cout<<"Not a leap year"<<endl;
}