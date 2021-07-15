/**problem: check if there exists two elements in a array
 *  such that their sum is equal to given target value K
 * @brief time compledity is O(n^2)
 * !so to make it better like O(n) :  linear traverse
 *  so to do this, we make 2 pointers
 * 1) low : this will be the first element
 * 2) High : this will be the last element
 * then add low and high then compare them with k to knopw if to move pointer forward or backward
 * 
 * sum = low+high
 * if target is less than sum, then we will
 *  increase pointer "Low" if sum if more than targer then we decrease high
 * this will be done until low is less than high
 * low<high
 * if low = high then our 2 elements doesnt equal to sum,. then we will return none
 */

#include <iostream>
using namespace std;
bool pairsum(int arr[], int n, int k)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if(arr[low] + arr[high] == k)
        {
            cout << low << " " << high << endl;
            return true;
        }
        else if(arr[low] + arr[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return false;
}
int main()
{
    int arr[] = {2,4,7,11,14,16,20,21};
    int k = 31;
    cout<< pairsum(arr,8,k)<<endl;
}