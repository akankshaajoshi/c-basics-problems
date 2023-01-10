#include<iostream>
using namespace std;

char getMaxOccuringCharacter(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        int number = 0;
        if ( ch>= 'a' && ch<='z')
            {number = ch - 'a';}
        else
            {number = ch - 'A';}
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for(int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a'+ans;
}
int main()
{
    string s;
    cin>>s;
    char ans = getMaxOccuringCharacter(s);
    cout<<"Max count char is: "<<ans<<endl;
    return 0;
}