#include<iostream>
#include<cstdlib> //Unsigned integers
using namespace std;
int main()
{
    srand(200);
    for (int i = 0; i < 8; i++)
    {
        cout<<rand()<<endl;
    }
    cout<<RAND_MAX<<endl;
    return 0;
}