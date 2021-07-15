/** 
 * 
 * Asked in Google, Amazon, Facebook, Visa job exams
Problem:
Given an unsorted array A of size N of non negative integers, find a continious
subarray which adds to a given number S

constraints:
1<= N<= 10^5
0<=Ai<=10^10
this means  time complextiy should be log(x)

example:
N=5
S=12
a[1,2,3,7, 5]
output = 2,4
basically output should be sum of the index elements (subarrays)
whose sum will be equal to S when added 
in this case element at index 2 is 2
element at index 3 is 3 and
element at index 4 is 7
so now sum of elements at those indexes are
2+3+7 = 12
which is equal to S

BRUTE FORCE:
find sum of all possible subarrays:
if any sum equates to S
output the starting and ending index of the subarray
and time complextiy for this method would be O(n^2) becayse need nested loop

Optimization:
I) keep 2 pointers start and end (st and en)
and a variable currSum sum from st to en
II) Impliment en till currSum + a[en]>S
III) Start increasing st until currSum <= 
hence this gives time complexity as O(n)
*/

#include <iostream>
using namespace std;

int main()
{
    int n,s ; // n= size of array
    //cout << "Enter the number of elemnets to be in the list: ";
    cin >> n>>s;
    int a[n];

    //use for loop to enter elements inside array
    //cout << "Enter elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //-------------------------------------------------------------------------------------
    int i = 0, j = 0, st = -1, en = -1, sum = 0;
    while (j < n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }
    if (sum == s)
    {
        cout << i + 1 << " " << j << endl;
        return 0;
    }
    while (j < n)
    {
        sum += a[j];
        while (sum > s)
        {
            sum -= a[i];
            i++;
        }
        if (sum == s)
        {
            st = i + 1;
            en = j + 1;
        }
        j++;//else it will become infinite loop
    }
    cout << st << " " << en << endl;

    return 0;
}
