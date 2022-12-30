#include<iostream>
#include<cmath>
#include<climits>
#include<cfloat>
using namespace std;

int isPrime(int n)
{
    int i = 2;
    if (n == 1 || n == 2){
        cout<<"The number is a prime number\n";
        return 0;
    }
    while (n>i)
    {
        if (n%i == 0)
        {
            cout<<"Number is not a prime number"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"Number is a prime number"<<endl;
    return 0;
}

int main()
{
    int n;
    cout<<"Enter a positive integer:"<<endl;
    cin>>n;
    cout<<isPrime(n)<<endl;
    return 0;
}