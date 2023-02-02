#include<iostream>
using namespace std;

void Merge(int arr[], int low, int high)
{
    int mid = low + (high - low)/2;
    int p = mid - low + 1;
    int q = high - mid ;

    int* first = new int[p];
    int* second = new int[q];

    int mainIndex = low;
    for (int i = 0; i < p; i++)
    {
        first[i] = arr[mainIndex++];
    }
    for (int i = 0; i < q; i++)
    {
        second[i] = arr[mainIndex++];
    }

    int index1 = 0;
    int index2 = 0;
    int k = low;

    while ( index1 < p && index2 < q)
    {
        if (first[index1] < second[index2])
        {
            arr[k++] = first[index1++];
        }
        else
        {
            arr[k++] = second[index2++];
        }
    }
    while (index1 < p)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < q)
    {
        arr[k++] = second[index2++];
    }

    delete []first;
    delete []second;

}
void MergeSort(int arr[], int low, int high)
{
    if (low >= high)
    {
        return;
    }
        int mid = low + (high-low)/2;
        MergeSort(arr, low, mid);
        MergeSort(arr, mid+1, high);
        Merge(arr, low, high);
}

int main()
{
    int arr[] = {1, 5, 23, 3, 2, 5, -3, 90};
    int size = sizeof(arr)/sizeof(arr[0]);
    MergeSort(arr, 0, size-1);
    for(int i =0 ; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}