#include<iostream>

using namespace std;

int main()
{
    int n = 44;
    cout<<"n = "<<n<<" &n = "<<&n<<endl;
    int *pn = &n;
    cout<<"pn "<<pn<<endl;
    cout<<"&pn "<<&pn<<endl;
    cout<<"*pn "<<*pn<<endl;
    return 0;
}