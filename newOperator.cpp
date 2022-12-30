#include<iostream>
using namespace std;
int main()
{
    //pointer_variable = new datatype(value);
    int *ptr = NULL;
    ptr = new int;
    float *ptr2 = new float(11.5);
    int *ptr3 = new int[28];
    *ptr = 48;
    cout << "Value of pointer variable 1 : " << *ptr << endl;
    cout << "Value of pointer variable 2 : " << *ptr2 << endl;
    if (!ptr3)
   cout << "Allocation of memory failed";
   else {
      for (int i = 10; i < 20; i++)
      ptr3[i] = i+1;
      cout << "Value of store in block of memory: ";
      for (int i = 10; i < 20; i++)
      cout << ptr3[i] << " ";
   }
    return 0;
}