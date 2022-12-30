#include<iostream>
using namespace std;
class Ratio
{
    public: 
    Ratio(int =0, int =1);
    Ratio& operator=(const Ratio&);
    Ratio& operator*=(const Ratio&);
    void print();
    private:
    int num;
    int den;
};
Ratio &Ratio::operator*=(const Ratio& r)
{
    num = num*r.num;
    den = den*r.den;
    return *this;
}
void Ratio::print()
{
    cout<<num<<den<<endl;
}

int main()
{
    Ratio x(22, 7), y(3, 8);
    x*=y;
    x.print();
    return 0;
}
//Similarly, you can overload other operators for each class as well