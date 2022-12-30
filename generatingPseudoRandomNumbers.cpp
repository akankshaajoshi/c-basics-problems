#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    unsigned seed = time(NULL);

    srand(seed);
    int min, max;
    cout<<"Enter min and max:"<<endl;
    cin>>min>>max;
    int range = max - min + 1;
    for (int i=0; i<20; i++)
    {
        int r = ((rand() / 100) % range) + min;
        cout<<r<<endl;
    }
    return 0;
}