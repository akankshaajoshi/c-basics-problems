#include<iostream>
#include<list>

using namespace std;

int main()
{
    //Doubly linked list
    list<int> l;
    list<int> n(5, 100);
    for(int i: n) cout<<i<<endl;
    
    l.push_back(1);
    l.push_front(2);
    for(int i: l) cout<<i<<endl;

    l.erase(l.begin());
    for(int i: l) cout<<i<<endl;

    //l.pop_back(); l.pop_front()
    cout<<"Size of list is: "<<l.front()<<endl;

    //l.begin(), l.end();

    return 0;
}