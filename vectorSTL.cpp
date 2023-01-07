#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5, 1);
    vector<int> last(a);
    
    cout<<"Capacity of vector is: "<<v.capacity()<<endl;

    v.push_back(1);
    v.push_back(2);
    cout<<"Capacity of vector is: "<<v.capacity()<<endl;

    cout<<"Size of the vector is: "<<v.size()<<endl;

    cout<<"Element at second index is: "<<v.at(2)<<endl;

    cout<<"Front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;

    v.pop_back();

    for(int i = 0; i < v.size(); i++)  cout<<v[i]<<endl;

    cout<<"Size of the vector is: "<<v.size()<<endl;
    v.clear();
    //Size will be 0 but capacity is not cleared
    cout<<"Size of the vector is: "<<v.size()<<endl;

    //Iterator: v.begin(), v.end()
    return 0;
}