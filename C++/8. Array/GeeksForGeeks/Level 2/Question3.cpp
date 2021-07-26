/**
 * @file Question3.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-26
 * @copyright Copyright (c) 2021
 * ! Count pairs with given sum
 * Given: array, a number called "SUM".
 * task: Find total number of pairs of integers in that array whose sum ius equal to "SUM"
 * ! Examples:
Input  :  arr[] = {1, 5, 7, -1}, 
          sum = 6
Output :  2
Pairs with sum 6 are (1, 5) and (7, -1)

Input  :  arr[] = {1, 5, 7, -1, 5}, 
          sum = 6
Output :  3
Pairs with sum 6 are (1, 5), (7, -1) &
                     (1, 5)         

Input  :  arr[] = {1, 1, 1, 1}, 
          sum = 2
Output :  6
There are 3! pairs with sum 2.

Input  :  arr[] = {10, 12, 10, 15, -1, 7, 6, 
                   5, 4, 2, 1, 1, 1}, 
          sum = 11
Output :  9
 *! Approach= 
 * simplest sol is traversing each ele in array   and checking if there exists other ele in that which can be added to get SUM;
 * 
 * 
 */
// lets try coding 1st method=
#include <iostream>
using namespace std;

// int pairsumcount(int arr[], int n, int sum)
// {
//     int count = 0; // this is to initialize result
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == sum)
//             {
//                 count++;
//             }
//         }
//     }
//     return count;
// }
// int main()
// {
//     int arr[] = {1, 5, 7, -1, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int sum = 6;
//     cout << "Count of pairs is " << pairsumcount(arr, n, sum);
//     return 0;
// }

/*
time comp = O(n^2)
space = O(1)
this is the problem this is not optimized
So lets try for other method:
efficient sol:
using hashmap
so first lest create a hashmap to store frequency of each number appeared how many times
this needs single traversal
now other traversal for, every element check if it can be combined with any other element (Obv other than itself)
to get desired Sum.
then increment the counter accordingly
now after 2nd loop is finished we have twice of the required value stored in counter because every pair is counted two times
hence divide it by 2and return counter
we have 



*/
using namespace std::unordered_map;
int pairsumcount(int arr[], int n, int sum)
{
    unordered_map<int, int> m;
    
}
int main()
{
    int arr[] = {1, 5, 7, -1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 6;
    cout << "Count of pairs is " << pairsumcount(arr, n, sum);
    return 0;
}