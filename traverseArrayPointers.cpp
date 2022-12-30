#include<iostream>
using namespace std;
int main()
{
    const int SIZE = 3;
    short array[SIZE] = {19, 29, 39};
    cout<<array<<endl;
    cout<<sizeof(short)<<endl;
    short* end = array + SIZE;
    short sum = 0;
    for (short* p = array; p <end; p++)
    {
        sum += *p;
        cout<<p<<" ";
        cout<<*p<<" ";
        cout<<sum<<" ";
        cout<<endl;
    }
    return 0;
}
// a[0] = * a + 0
//a[1] = * (a+1)
//for (int i = 0; i<8; i++)
//{ 
//cout << * (a+i) <<endl;
//}
//