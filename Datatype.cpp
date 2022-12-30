#include<iostream>
#include<climits>
#include<cfloat>
using namespace std;
int main(){
    int a = 6;
    char b = 'c';
    bool c = false;
    const int D = 20;
    char f[20];
    enum sem{jan = 1, feb, march};
    cout<<a<<b<<c<<D<<"\n";
    cin>>f;
    cout<<SHRT_MIN<<endl;
    cout<<SHRT_MAX<<endl;
    cout<<USHRT_MAX<<endl;
    cout<<INT_MIN, INT_MAX, UINT_MAX, LONG_MAX, LONG_MIN, ULONG_MAX;
    cout<<__FLT_MANT_DIG__, __FLT_DECIMAL_DIG__, __FLT_MIN__, __FLT_MAX__;

    return 0;
} // namespace std;
