#include <bits/stdc++.h> 
void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for ( int i = 1; i < n ; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
                arr[j+1] = arr[j];
            else
                break;
        }
        arr[j+1] = temp;
    }
}
//Why insertion sort?
//Adaptable algorithm
//Stable algorithm
//Space complexity: O(1)
//Time complexity: O(n^2)
//Best case complexity: O(n)
//Worst case complexity: O(n^2)
