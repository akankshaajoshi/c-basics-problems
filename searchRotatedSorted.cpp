#include <bits/stdc++.h> 
int getPivot(vector<int>& arr, int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + ( e - s)/2;
    while (s < e)
    {
        if (arr[mid]>=arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s)/2;
    }
    return s;
}
int bsearch(vector<int>& arr, int s, int e, int key)
{
    int low = s;
    int high = e ;
    int mid = low + (high - low) / 2;
    while (low <= high)
    {
        if (arr[mid] == key) return mid;
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        mid = low +  (high - low) / 2;
    }
    return -1;
};
int findPosition(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = getPivot(arr, n);
    if ( k >= arr[pivot] && k <= arr[n-1])
        return bsearch(arr, pivot, n-1, k);
    else
        return bsearch(arr, 0, pivot-1, k);
}

