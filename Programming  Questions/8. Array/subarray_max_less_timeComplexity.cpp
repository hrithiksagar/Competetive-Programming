//! cumulative sum approach
/**
 * @brief array :               -1  4  7  2
 *        cumulative sum array: -1  3  10 12 : addition of previous elements
 *        * need 2 loops 1 for starting point and 2nd for ending point.
 * ending point cum sum - starting point cum sum = max sum array sum
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
    int currSum[n+1];// prefix of i {index i 0 to i}
    currSum[0] = 0;
    for (int i = 0; i <= n; i++) 
    {
        currSum[i] = currSum[i-1]+ arr[i-1];  // cos arr[i-1] is because loop is from 1 to n
    }
    int maxsum = INT_MIN;
    for (int i = 0; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = currSum[i] - currSum[j];
            maxsum = max(sum, maxsum);
        }
    }
    cout<< maxsum;  
    return 0;  
}

