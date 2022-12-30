//Short circuiting: Conditions which will not evaluate the second operand unless necessary. It is called short circuiting.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter an integer to find out whether it is odd or even"<<endl;
    cin>>n;
    if(n%2 == 0){
        cout<<"it is an even number"<<endl;
    }
    else{
        cout<<"it is an odd number"<<endl;
    }


    int d;
    cout<<"Enter another integer"<<endl;
    cin>>d;
    if (d!= 0 && n%d == 0){
        cout<<d<<" divides "<<n<<endl;
    }
    else{
        cout<<d<<" does not divide "<<n<<endl;
    }


    switch(n)
    {
    case 1: cout<<"n = 1, corresponds to sunday"<<endl;
    case 2: cout<<"n = 2, corresponds to monday"<<endl;
    default: cout<<"Hey, you just triggered the default switch case statement"<<endl;
    }
    return 0;
}