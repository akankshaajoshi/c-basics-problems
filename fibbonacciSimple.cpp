#include<iostream>
using namespace std;
int main()
{
    long bound;
    cout<<"Enter a positive integer\n";
    cin>>bound;
    long f0 = 0;
    long f1 = 1;
    long f2 = f1 + f0;
    while (f2<bound){
            f2 = f1 + f0;
            cout<<f2<<endl;;
            f0 = f1;
            f1 = f2;
    }
    return 0;
}