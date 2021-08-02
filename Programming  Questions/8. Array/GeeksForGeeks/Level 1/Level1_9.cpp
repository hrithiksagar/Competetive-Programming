#include <iostream>
using namespace std;
/**
 * @brief Move all negative numbers to beginning and positive to end with constant extra space
 * An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.
 * Examples : 
 *Input:  -12, 11, -13, -5, 6, -7, 5, -3, -6
 *Output: -12 -13 -5 -7 -3 -6 11 6 5
 * 
 */

void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (i != j)
            {
                swap(arr[i], arr[j]);
            }
            j++;
        }
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {-1, 2, -3, 4, -5, 6, -7, 8, -9};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    print(arr, n);
    return 0;
}