#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements in array: "<<endl;
    cin>>n;
    cout<<endl<<"Enter the elements in array: "<<endl;

    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>*(arr+i);
    }

    cout<<"Entered elements are: "<<endl;
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Creating a dynamic 2-d array

    int rows, cols;
    cout<<"Enter the number rows: "<<endl;
    cin>>rows;
    cout<<"Enter the number of columns: "<<endl;
    cin>>cols;

    int** arr1 = new int*[rows];
    for (int i = 0; i < rows ; i++)
    {
        arr1[i] = new int[cols];
    }

    for(int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin>>arr1[i][j];
        }
    }

    for(int i = 0; i < rows; i++)
    {
        delete [] arr1[i];
    }
    delete []arr1;
    
    return 0;
}