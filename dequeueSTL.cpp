#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

    for (int i : d) cout<<i<<endl;

    //d.pop_back(); 
    //for (int i : d) cout<<i<<endl;
    
    //d.pop_front()
    cout<<"Print 1st index element"<<d.at(1)<<endl;

    cout<<"Empty or not: "<<d.empty()<<endl;

    cout<<"Size of the dequeue is: "<<d.size()<<endl;    
    d.erase(d.begin(), d.begin()+1);
    cout<<"Size of the dequeue is: "<<d.size()<<endl;    
    return 0;
}