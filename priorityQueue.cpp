//Default priority queue is max heap
#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main()
{
    //Max Heap
    priority_queue<int> maxi;

    //Min Heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    int n = maxi.size();
    for(int i = 0; i < n; i++) 
    {cout<<maxi.top()<<endl;
    maxi.pop();
    };

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    int m = mini.size();
    for(int i = 0; i < m; i++) 
    {cout<<mini.top()<<endl;
    mini.pop();
    };

    cout<<"Empty or not: "<<mini.empty()<<endl;
    
    return 0;
}