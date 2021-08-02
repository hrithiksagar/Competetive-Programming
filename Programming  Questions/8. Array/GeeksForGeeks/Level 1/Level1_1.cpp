/**
 * @file Level1_1.cpp
 *! Check if a key is present in every segment of size k in an array
 * Given an array arr[] and size of array is n and one another key x, and give you a segment size k.
 * The task is to find that the key x present in every segment of size k in arr[].
 * Key_element and segment
 * in each segment, the key_element should exists then output Yes else NO
 */
#include <iostream>
using namespace std;
bool FindXinKWindowSize(int a[], int x, int k, int n)
{
    int i;
    for (i = 0; i < n; i = i + k)
    {
        int j;
        for ( j = 0; j < k; j++)
        {
            if (a[i + j] == x)
            {
                break;
            }
        }
        if (j == k)
        {
            return false;
        }
    }
    // if array size is multiple of K then
    if (i == n)
    {
        return true;
    }
    // now lets check in lase segmemnt, if n is not multiple of K then
    int j;
    for ( j = i - k; j < n; j++)
    {
        if (a[j] == x)
        {
            break;
        }
    }
    if(j == n)
    {
        return false;
    }
    return true;
}
int main()
{
    int arr[] = {3, 5, 2, 4, 9, 3, 1, 7, 3, 11, 12, 4};
    int x = 3, k = 3;
    int n = sizeof(arr) / sizeof(arr[0]);
    if (FindXinKWindowSize(arr, x, k, n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}