#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    unsigned seed = time(NULL);
    cout<<seed<<endl;
    srand(seed);
    for (int i=0; i<8; i++)
    {
        cout<<rand()<<endl;
    }
    return 0;
}