#include<iostream>
using namespace std;

int lsearch(int arr[], int size, int key){
    if (size == 0)
        return -1;
    if (arr[0] == key)
        return size-1;
    return lsearch(arr+1, size-1, key);
}
int main()
{
    int arr[] = {1, 3, 5, 7, 3, 7, 8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 10;
    cout<<lsearch(arr, size, key)<<endl;
    return 0;
}