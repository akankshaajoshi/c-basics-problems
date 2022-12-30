#include<iostream>
using namespace std;
void sort(float* p[], int n)
{
    float* temp;
    for (int i = 0; i<n ; i++)
    {
        for (int j = 0; j<n-i ; j++)
        {
            if (*(p+j) > *(p+j+1))
            {
                temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }
}
int main()
{
    float arr[] = {0, -5, 100, 6, 9, 32, -65};
    sort(arr, sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i<sizeof(arr)/sizeof(arr[0]); i++)
    {
        cout<<arr[i];
    }
    return 0;
}