#include<iostream>
using namespace std;

void insertionSort(int arr[], int size)
{
    if (size == 0 || size == 1)
        return ;
    insertionSort(arr, size-1);
    int last = arr[size-1];
    int j = size - 2;
    while (j >= 0 && arr[j] > last)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}
int main()
{
    int arr[] = {1, 4, 6, 2, 5, 8, 3, 7, 0};
    int size = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}