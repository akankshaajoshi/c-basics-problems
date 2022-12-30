#include<iostream>

using namespace std;

//Defining a class
class Ratio{

    //Defining public class members
    public: void assign(int, int);
    double convert();
    void invert();
    void print();

    //Defining private class members
    private: int num;
    int den;
};
int main()
{
    Ratio x;
    x.assign(22, 7);
    x.print();
    cout<<x.convert()<<endl;
    x.invert();
    x.print();
    return 0;
}

void Ratio::assign(int numerator, int denominator)
{
    num = numerator;
    den = denominator;
}
double Ratio::convert()
{
    return double(num/den);
}
void Ratio::invert()
{
    int temp;
    temp = num;
    num = den;
    den = temp;
}
void Ratio::print()
{
    cout<<num<<'/'<<den<<endl;
}