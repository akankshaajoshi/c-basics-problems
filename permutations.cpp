#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;
long fact(int n)
{
    if (n == 0 || n == 1 )
    {
        return 1;
    }
    return n*fact(n-1);
}
long perm(int n, int k)
{
    if (n<=0 || k<=0 || k>=n) return 0;
    return fact(n)/fact(n-k);
}
int main()
{
    int n, k;
    cout<<"Enter a positive integer:\n";
    cin>>n;
    cout<<"The factorial of the given number is: "<<fact(n)<<endl;
    cout<<"Enter the value of k to calculate the number of possible permutations:\n";
    cin>>k;
    cout<<"Permutation for n="<<n<<" and k="<<k<<" is "<<perm(n, k);
    return 0;
}