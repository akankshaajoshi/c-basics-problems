#include<iostream>
#include<cmath>
using namespace std;
int fib(int n){
    double phi = ( 1 + sqrt(5))/2;
    return round(pow(phi, n)/sqrt(5));
}
int main()
{
    int n, i = 0;
    cout<<"Enter the number of terms:"<<endl;
    cin>>n;
    while (i<n){
            cout<<fib(i)<<endl;
            i++;
    }
    return 0;
}