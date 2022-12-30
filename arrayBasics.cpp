#include<iostream>
#include<cstring>
#include<string.h>
#include<iomanip> //Setw and other functions to manipulate display of I/O functions
#include<bits/stdc++.h> //Provides a function for sorting an array (bubble sort)

using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float arr1[] = {10, 40.3, 20.736, 80};
    char arr2[] = "Hello, world!";
    int arr3[4];

    int sizeofarr, sizeofarr1, sizeofarr2;
    sizeofarr = sizeof(arr)/sizeof(arr[0]);
    sizeofarr1 = sizeof(arr1)/sizeof(arr1[0]);
    sizeofarr2 = sizeof(arr2)/sizeof(arr2[0]);

    for (int i = 0; i<sizeofarr; i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<"Enter the integer elements for the array:"<<endl;
    for (int i = 0; i<4 ; i++)
    {
        scanf("%d", &arr3[i]);
    }

    cout<<"The entered array is: "<<endl;
    for (int i = 0; i<4; i++)
    {
        printf("%d ", arr3[i]);
    }
    cout<<endl;


    //Sum of elements in the array
    int sum = 0;
    for (int i = 0; i<4; i++)
    {
        sum += arr3[i];
    }
    cout<<"Sum of all the elements of the given array is: "<<sum<<endl;

    //Print memory address of the array
    cout<<"Allocated memory address of the entered array is: "<<arr3<<endl;

    //Linear Search in array
    int element;
    cout<<"Enter the element to be searched: "<<endl;
    cin>>element;
    for (int i = 0; i<4; i++)
    {
        if (arr3[i] == element)
        {
            cout<<"Element found at index: "<<i;
        }
    }
    cout<<endl;

    //Bubble sort
    cout<<"Sorted array is: ";
    int sizeofarr3;
    sizeofarr3 = sizeof(arr3) / sizeof(arr3[0]);
    sort(arr3, arr3 + sizeofarr3);
    for(int i = 0; i<4; i++)
    {
        cout<<arr3[i]<<" ";
    }

    return 0;
}