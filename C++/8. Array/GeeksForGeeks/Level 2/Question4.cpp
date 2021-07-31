/**
 * @file Find Duplicates in Arrays
 * Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.
 * Input: n = 7 , array = {1, 2, 3, 1, 3, 6, 6}
    Output: 1, 3 and 6.
 * Algorithms: 
 *
 * 
 */
#include <iostream>
using namespace std;
void duplicate(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    inr arr[] = {1, 2, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << duplicate(arr, n);
    return 0;
}