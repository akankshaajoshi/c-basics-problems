#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int, string> m;
    m[1] = "Joshi";
    m[2] = "Akanksha";
    m[23] = "Abha";
    m[16] = "Gaurav";
    m.insert({5, "bhim"});

    cout<<"Before erase: "<<endl;
    for (auto i: m) cout<<i.first<<" "<<i.second<<endl;

    m.erase(5);
    cout<<"After erase: "<<endl;
    for (auto i: m) cout<<i.first<<" "<<i.second<<endl;

    //Ordered map All complexities: O(log n) using red black tree or balanced tree
    //Unordered map All complexitites: O(n) using hash table

    auto it = m.find(2);
    for (auto i = it; i!=m.end(); i++)
        cout<<(*i).first<<endl;

    return 0;
}