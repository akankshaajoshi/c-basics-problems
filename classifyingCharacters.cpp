#include<iostream>
#include<cctype> //Defines character manipulation functions
using namespace std;
void printCharacterCategory(char c);
int main()
{
    for (int c = 0; c<=128; c++)
    {
        printCharacterCategory(c);
    }
    return 0;
}
void printCharacterCategory(char c)
{
    if (isdigit(c)) cout<<c<<" is a digit"<<endl;
    else if (islower(c)) cout<<c<<" is a lowercase character"<<endl;
    else if (isupper(c)) cout<<c<<" is an uppercase character"<<endl;
    else if (isspace(c)) cout<<c<<" is a whitespace character"<<endl;
    else if (iscntrl(c)) cout<<c<<" is a control character"<<endl;
    else if (ispunct(c)) cout<<c<<" is a punctuation character"<<endl;
    else cout<<" Error!"<<endl;
}