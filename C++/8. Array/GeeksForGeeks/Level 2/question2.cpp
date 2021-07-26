/**
 * @file question2.cpp
 * ! Find the missing Number
 * * (easy)
 * * Example: 
Input: arr[] = {1, 2, 4, 6, 3, 7, 8}
Output: 5
Explanation: The missing number from 1 to 8 is 5

Input: arr[] = {1, 2, 3, 5}
Output: 4
Explanation: The missing number from 1 to 5 is 4
*/
/**
 * Brute Force Approach: 
 *  sum of elements form 1 --> n can be calculed by 
 * n(n+1)/2   ------> i
 * so find sum of all 1 --> (n-1) elemenst and sub it from eq i
 * : {(n-1)(n-1+1)/2} -  (n(n+1)/2)
 * = [(n-1)n-n(n+1)}/2]
 * = [{n(n-1-n-1)}/2]
 * = -n/2
 * ! Algorithm
 * 1. fin, sumtotal = n(n+1)/2
 * 2. new variable sum = stores sum of array elements
 * 3. traverse array friom start to end
 * 4. update sum += array[i]
 * 5. print missing num = subtotal - sum
 */

#include <iostream>
using namespace std;

int getMissingNo(int a[], int n)
{
 
    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}
 
// Driver Code
int main()
{
    int arr[] = { 1, 2, 4, 5, 6, 8, 9 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int miss = getMissingNo(arr, n);
    cout << miss;
}
