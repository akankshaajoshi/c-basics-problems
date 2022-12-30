#include<iostream>
using namespace std;

int bsearch(int arr[], int n, int key)
{
    int low = 0;
    int high = n - 1;
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

int main()
{
    int key = 4;
    int even[8] = {0, 1, 2, 3, 4, 5, 6, 7};
    int odd[5] = {0, 1, 2, 3, 4};

    int indexeven = bsearch(even, 8, key);
    int indexodd = bsearch(odd, 5, key);

    cout<<indexeven<<" "<<indexodd<<endl;

    return 0;
}