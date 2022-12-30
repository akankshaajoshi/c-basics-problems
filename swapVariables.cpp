#include<iostream>
using namespace std;
int main()
{
    int x;
    int y;
    cout<<"Enter two integers:\n";
    cin>>x>>y;
    cout<<"The variables are: x = "<<x<<", y = "<<y<<endl;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"The variables after swapping are: x = "<<x<<", y = "<<y;
    return 0;
}