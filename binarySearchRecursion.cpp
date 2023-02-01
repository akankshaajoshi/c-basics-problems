#include<iostream>
using namespace std;
int bsearch(int arr[], int low, int high, int key)
{
    if (low >= high)
        return -1;
    int mid = low + (high - low)/2;
    if (arr[mid] == key)
        return mid;
    if (arr[mid] > key)
        return bsearch(arr, low, mid-1, key);
    if (arr[mid] < key)
        return bsearch(arr, mid+1, high, key);
}

int main()
{
    int arr[] = {1, 3, 5, 7, 8, 9, 89};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 9;
    cout<<bsearch(arr, 0, size-1, key)<<endl;
    return 0;
}