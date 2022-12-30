#include<iostream>
#include<Date.h>
class Person
{
    public:
    Person(char* n = " ", int s= 0,  char* nat = "India"): name(n), sex(s), nationality(nat){}
    void setDOB(int m, int d, int y) { dob.setDate(m, d, y)};
    void setDOD(int m, int d, int y) {dob.setDate(m, d, y)};
    void printName() {cout<<name;}
    void printNationality() {cout<<nationality;}
    void printDOB() {cout<<dob;}
    void printDOD() {cout<<dod;}
    private:
    string name, nationality;
    Date dob, dod;
    int sex;
};
int main()
{
    Person leader("Subhash Chandra Bose", 1, "India");
    leader.setDOB(1, 23, 1897);
    leader.setDOD(8, 18, 1945);
    cout<<"The founder of the Indian National Army was ";
    leader.printName();
    cout<<".\nHe was born on ";
    leader.printDOB();
    cout<<" and died on";
    leader.printDOD();
    cout<<".\n";
    return 0;
}