/**Program to cyclically rotate an array by one
Program to cyclically rotate an array by one
Example:
Input:  arr[] = {1, 2, 3, 4, 5}
Output: arr[] = {5, 1, 2, 3, 4}
brute force approach:
1. Store last ele in new variable, x.
2. shift all elements one position ahead
3. replace first ele of array with x

*/
#include<iostream>
using namespace std;

// void rotate(int a[], int n){
//     int x = a[n-1];
//     int i;
//     for ( i = n - 1; i > 0; i--)
//     {
//         a[i] = a[i-1];
//     }
//     a[0] = x;
// }

// int main(){
//     int a[] = {1,2,3,4,5,6};
//     int n = sizeof(a)/sizeof(a[0]);
//     cout<<"Given array is: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     rotate(a,n);
//     cout<<"Rotated Array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }
/**
 * @brief 
 * ! Another Approach
 * use 2 pointers i, j
 * i = 0;
 * j = n-1;
 * until i != j:
 *      a[i] , a[j] = a[j] , a[i]
 *      i += 1;
 * pass
 * 
 * 
 */
void rotate(int arr[], int n)
{
    int i = 0, j = n-1; // i and j pointing to first and last element respectively
      while(i != j){
      swap(arr[i], arr[j]);
      i++;
    }
}
 
// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5}, i;
    int n = sizeof(arr) /
            sizeof(arr[0]);
 
    cout << "Given array is \n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    rotate(arr, n);
 
    cout << "\nRotated array is\n";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}