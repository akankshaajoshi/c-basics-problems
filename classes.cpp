#include<iostream>
using namespace std;
class Ratio
{
    public: 
    Ratio(int n, int d) {num = n, den = d;}
    void assign(int numerator, int denominator) {num = numerator, den = denominator;}
    void print() { cout<<num<<"/"<<den<<endl;}
    float convert() {return float(num/den);}
    void invert() {int temp; temp = num, num = den, den = temp;}
    ~Ratio(){
        cout<<"The object has died"<<endl;
    }
    private: int num;
    int den;
};
int main()
{
    Ratio pi(22, 7);
    pi.assign(22, 7);
    pi.print();
    pi.convert();
    pi.invert();
    pi.print();
    return 0;
}