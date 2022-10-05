#include <iostream>
using namespace std;

void alternateswap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main()
{

    int even[6] = {11, 23, 545, 65, 87, 100};
    int odd[5] = {76, 34, 78, 90, 28};

    alternateswap(even, 6);
    printarray(even, 6);

    alternateswap(odd, 5);
    printarray(odd, 5);

    return 0;
}



/*
Duplicate in array

int findDuplicate(vector<int> &arr) 
{
    // Write your code here
    int ans = 0;
    for(int i =0; i<arr.size(); i++)
    {
        ans= ans^arr[i];
    }
     for(int i =1; i<arr.size(); i++)
     {
         ans = ans^i;
     }
    return ans;
    
}

*/