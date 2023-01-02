#include <bits/stdc++.h> 
void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for (int i = 1; i < n; i++)
    {
        bool swap = false;
        for (int j = 0; j < n - i ; j++)
        {
            if (arr[j+1] < arr[j])
            {int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            swap = true;
            }
        }
       if (swap == false) break;
    }
}

//Time complexity: O(n^2)
//Space complexity: O(1)
//Stable sort: Retains values of duplicates in original order.
//Inplace algorithm: Does not use extra memory space.
