#include<iostream>
using namespace std;

void print(int arr[], int n, int start = 0)
{
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[] = {1, 4, 7, 8, 9};
    int size = 5;
    print(arr, size);

    return 0;
}