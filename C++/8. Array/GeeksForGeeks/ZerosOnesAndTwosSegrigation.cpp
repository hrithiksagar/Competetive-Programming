/**
 * @file ZerosOnesAndTwosSegrigation.cpp
 * ! Burte Force
 *lets divide it into 3 parts : Lower/ mid/ upper
 * todo: 0s: 1 - (lower-1)   : red   : if its out of this range, swap to lower range, thus shrinking unkown range
 * todo: 1s: lower - (mid-1) : white : follow same here also
 * todo: unknown mid - hi    :       :
 * todo: 2s: (hi+1) - n      : Blue  : if its 2 then swap to high range
 * ! Approach: 
 * * Initializing: 
 * low  = 1
 * mid  = 1
 * high = n
 * has 4 ranges:
 * 1. 1 - low
 * 2. low to mid
 * 3. mid to high
 * 4. high to n
 * if ele = 0; update it with: low += 1; and mid += 1;
 * if ele = 1; update it with: mid += 1;
 * if ele = 2; then, swap element with ele at highest index and update high; high -= 1 and i -= 1 as swapped ele is not processed
 * print output array
 * * Dry Run:
 * ! Case 1: 
 * a[mid] is White, mid++
 * ! Case 2:  
 * a[mid] = blue, swap a[mid] and a[high] then high++
 * continue until Mid > high
 * 
 */
#include <iostream>
using namespace std;

void sorting012(int a[], int n)// n = size of array
{
    int low = o;
    int mid = 0;
    int high = n-1;
    // Iterating until all the elements are sorted
    while (mid <= high)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[low++], a[mid++]);
            break;
        
        default:
            break;
        }
    }
    
}