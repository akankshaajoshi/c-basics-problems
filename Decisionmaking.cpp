#include<iostream>
using namespace std;
int main(){
    int n, d;
    cout<<"enter 2 integers:\n";
    cin>>n>>d;
    if(n%d) cout<<n<<" not divisible by "<<d<<endl;
    else cout<<n<<" divisible by "<<d<<endl;
    return 0;
}