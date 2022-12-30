//typedef element_type alias -> An array

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void read()
{
    int arr[3][3];
    cout<<"Enter the integers per row: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
    }
}

void print(const int arr[][3])
{
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j<3; j++)
        {
            cout<<" "<<arr[i][j];
            cout<<endl;
        }
    }
}

//Functions for reading and printing arrays