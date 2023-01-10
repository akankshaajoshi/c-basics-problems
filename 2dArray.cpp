#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int rows, int cols)
{
    for (int i= 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == target)
                return true;
        }
    }
    return false;
}

void rowwiseSum(int arr[][4], int rows, int cols)
{
    int sum;
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for(int j = 0; j < cols; j++)
        {
            sum+= arr[i][j];
        }
        cout<<sum;
    }
}

void columnwiseSum(int arr[][4], int rows, int cols)
{
    int sum;
    for (int i = 0; i < cols; i++)
    {
        sum = 0;
        for (int j = 0; j < rows; j++)
        {
            sum+= arr[j][i];
        }
        cout<<sum;
    }
}

int largestRowSum(int arr[][4], int rows, int cols)
{
    int maxi = INT32_MIN;
    int index = -1;
    int sum;
    for (int i = 0; i < rows; i++)
    {
        sum = 0;
        for(int j = 0; j < cols; j++)
        {
            sum+= arr[i][j];
        }
        if (sum > maxi)
            maxi = sum;
            index = i;
    }
    cout<<"The maximum sum is: "<<maxi<<" for row index: "<<index<<endl;
    return index;
}

int main()
{
    int arr[3][4] = {0};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter the target element: "<<endl;
    cin>>target;
    if (isPresent(arr, target, 3, 4))
    {
        cout<<"Found."<<endl;
    }
    else{
        cout<<"Element not present."<<endl;
    }
    return 0;
}