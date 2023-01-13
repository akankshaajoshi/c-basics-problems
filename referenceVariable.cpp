#include<iostream>
using namespace std;

void update (int& n)
{
    n++;
}

//int& func(int a)
//{
//    int num = a;
//    int& ans = num;
//    return ans;
//} Bad practice

int main()
{
    int i = 5;
    int& j = i; //Reference variable: same memory different names

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;

    //Why reference variable? To create a pass by reference
    cout<<"Before: "<<i<<endl;
    update(i);
    cout<<"After: "<<i<<endl;

    return 0;
}