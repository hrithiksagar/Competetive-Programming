/**
 * @file Kadanes_Algorithm.cpp
 * @author Hrithik (hrithiksagar36@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-08
 * 
 * @copyright Copyright (c) 2021
 * 
 *   array :    -1  4  -6  7  -4
 * current sum: -1  4  -2  7   3
 * negative numbers will be updated with 0
 * updated current sum: 0 4 0 7 3
 * maximum sum:               7   :: 7 is the maximum sum
 * 
 * only 1 loop is used so time complexity is O(n)
 */

 #include<iostream>
#include<climits>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int currsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currsum += arr[i];
        if(currsum<0){
            currsum = 0;
        }
        maxsum = max(maxsum, currsum);
    }
    cout<< maxsum;
    
    
    return 0;  
}