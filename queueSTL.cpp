#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("akanksha");
    q.push("joshi");
    q.push("ok");

    cout<<"First element is: "<<q.front()<<endl;
    cout<<"Last element is: "<<q.back()<<endl;
    cout<<"Size of the queue is: "<<q.size()<<endl;

    q.pop();
    cout<<"First element is: "<<q.front()<<endl;
    cout<<"Size of the queue is: "<<q.size()<<endl;

    cout<<"Empty or not: "<<q.empty()<<endl;
    return 0;
}