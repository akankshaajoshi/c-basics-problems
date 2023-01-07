#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(6);
    s.insert(6);    
    s.insert(5);
    s.insert(3);
    s.insert(2);
    s.insert(8);
    s.insert(2);
    s.insert(1);

    set<int>::iterator it = s.begin();
    it++;

    for(int i: s) cout<<i<<endl;
    s.erase(it);

    for(int i : s) cout<<i<<endl;

    cout<<"Is the number 5 present or not: " <<s.count(5)<<endl;
    cout<<"Is the number -5 present or not: " <<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(5);
    cout<<"Value present at itr is: "<<*itr<<endl;

    //Response of a value is returned as a reference to pointer variable using iterator
    for( auto it = itr; it!=s.end(); it++)
    {
        cout<<*it<<endl;
    }

    return 0;
}