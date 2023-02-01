//Macro is a piece of code in a program that is replaced by value of macro
#define PI 3.14

#include<iostream>
using namespace std;

int main()
{
    int r = 6;
    float area = PI * r * r;
    cout<<area<<endl;
    return 0;
}