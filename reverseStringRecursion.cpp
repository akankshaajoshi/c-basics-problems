#include<iostream>
using namespace std;

void reverseString(string& str, int i, int j)
{
    if (i > j)
        return ;
    swap(str[i], str[j]);
    i++;
    j--;
    reverseString(str, i, j);
}

int main()
{
    string s = "Hello bro";
    reverseString(s, 0, s.length()-1);
    cout<<s;
    return 0;
}