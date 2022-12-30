#include<iostream>
using namespace std;
int &max(int &m, int &n)
{
    return (m>n? m:n);
}
int main()
{
    int m = 44, n = 22;
    cout<<max(m, n)<<endl;
    return 0;
}
