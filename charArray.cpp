#include<iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) count++;
    return count;
}

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch<='z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

char toUpperCase(char ch)
{
    if (ch >= 'A' && ch<='Z')
        return ch;
    else
    {
        char temp = ch - 'a' + 'A';
        return temp;
    }
}

void reverseString(char name[], int n)
{
    int s = 0;
    int e = n-1;
    while ( s <= e)
    {
        swap(name[s++], name[e--]);
    }
}

bool checkPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (name[s] != name[e]) 
            return false;
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;
    cout<<"Your name is "<<name<<endl;
    
    int n = getLength(name);
    cout<<"Length of your name is: "<<n<<endl;
    
    reverseString(name, n);
    cout<<"Reverse of your name is: "<<name<<endl;

    int c = checkPalindrome(name, n);
    cout<<"Is your name a palindrome? " <<c<<endl;
    return 0;
}