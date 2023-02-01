#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
    if (size==0 || size==1)
        {return ;}
    int max_index = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[max_index] < arr[j])
        max_index = j;
    }
    swap(arr[max_index], arr[size-1]);
    selectionSort(arr, size-1);
}

int main()
{
    int arr[] = { 3, 5, 12, 2, -1, 76, 89};
    int size = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, size);
    for (int i= 0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}