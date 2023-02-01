#include<iostream>
using namespace std;

int score = 15;

void a(int& i)
{
    cout<<i<<endl;
    cout<<score<<endl;
}
int main()
{
    int i = 5;
    a(i);
    {
        int i = 2;
        cout<<i<<endl;
        cout<<score<<endl;
    }
    return 0;
}