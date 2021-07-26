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

// int getMissingNo(int a[], int n)
// {
 
//     int total = (n + 1) * (n + 2) / 2;
//     for (int i = 0; i < n; i++)
//         total -= a[i];
//     return total;
// }
 
// // Driver Code
// int main()
// {
//     int arr[] = { 1, 2, 3, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int miss = getMissingNo(arr, n);
//     cout << miss;
// }
// this solution has a problem of overflow
/*
Solution = pick one number from known numbers
then, substract one number from given number 
this way there wont be interger overflow ever
Algorithm: 
1. new variable 
sum = 1
which will store missing num
and counter variable c = 2
2. traverse array from start to end
3. update value of sum -= a[i]+c
update c++
print sum (which is missing num)

*/

int getMissingNo(int a[], int n)
{
    int i, total=1;
     
    for ( i = 2; i<= (n+1); i++)
    {
        total+=i;
        total -= a[i-2];
    }
    return total;
}
 
//Driver Program
int main() {
    int arr[] = {1, 2, 3, 4, 5,6,7,9,10};
    cout<<getMissingNo(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}

/**
 * @brief notes from youtube video
 * 
 * range =1 - n
 * method 1:
 * ! Using hashing
 * first lets create hashmap of value n+1
 * let
 * n = 5
 * 0 1 2 3 4 5
 * f f f f f f 
 * iterate through all the elements
 * if one is presnt mark it true
 * and keep continuing
 * now lets start checking form 1st element and iterate through left to right na dwhat ever ele marked false is missing
 * time complexity(O(n))
 * space: O(n)
 * !method 2
 * ! (better solution)
 * ! using sum formula
 * ex:        1 2 3 5
 * indices    0 1 2 3
 * sum(n) = n(n+1)/2
 *s(5) = 5(6)/2 = 15
  sum of elements in integer example is
  1+2+3+5 = 11
  now what we need to tdo to find missing number is
  s(n) - s(elements of array) = missing number
  Time = O(n)
  space = O(1) : since we are not using any extra space
  this is not best sol as we have overflow issues
  cause we are adding elements if array elemnets are large then we have overflow issues
  METHOD 3
  XOR
  array    1 2 3 5
  indices  0 1 2 3
   what we do is:
   calculate XOR of first n natural numbers and XOR of elements in array
   (1^2^3^5)
   (1^2^3^4^5)
   XOR of x(x) = 0 i.e. x^x = 0
   let take ex of 5:
    1 0 1
   ^1 0 1
   ________
    0 0 0
   ________
   
   if we are doing xor between same elements ans is always 0
time = O(n)
space = O(1)
no overflow case
best method as far as we know



 */
//algorithm in python

def missing(a,n):
    x1 = a[0]
    x2 = 1
    for i in range(1,n):
        x1 = x1^a[i]
    for i in range(2, n+2):
    