#include<iostream>
#include<cmath>
using namespace std;
int factorial(int n){
    if (n <= 1) return 1;
    else{
        return n*factorial(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter a positive integer:"<<endl;
    cin>>n;
    cout<<"The factorial of "<<n<<" is "<<factorial(n)<<endl;
    return 0;
}