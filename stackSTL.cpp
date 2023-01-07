#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string> s;
    s.push("akanksha");
    s.push("joshi");
    s.push("ok");

    cout<<"Top element is: "<<s.top()<<endl;
    cout<<"Size of stack is: "<<s.size()<<endl;
    
    s.pop();
    cout<<"Top element is: "<<s.top()<<endl;
    cout<<"Size of stack is: "<<s.size()<<endl;

    cout<<"Empty or not: "<<s.empty()<<endl;
    
    return 0;
}