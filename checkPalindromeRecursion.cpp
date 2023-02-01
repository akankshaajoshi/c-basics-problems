#include<iostream>
using namespace std;

bool isPalindrome(string& str, int i, int j)
{
    if (i>j)
        return true;
    if (str[i] != str[j])
        return false;
    else
        return isPalindrome(str, i+1, j-1);
}

int main(){
    string s = "abccba";
    cout<<isPalindrome(s, 0, s.length()-1)<<endl;
    return 0;
}