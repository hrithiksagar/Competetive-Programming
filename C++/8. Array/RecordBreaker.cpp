/*
Q) Isyana is given number of visitors at her local theme park on N Consecutive days.
number of visitors on ith day is Ai
A day is record breaking if it satisfies both of the following conditions:
(i) number of visiots on the day is strictly larger than the number of visitors
on each of the previous day.
(ii) Either it is last day or
(iii) The number of visitors on the day is strictly 
larger than the number of visitos on the following day.

Note: very first day is record breaking day!
find number of record breaking days!
------------------------------------------------------------------------------
Input:
first line gives : number of test cases - T
T test cases follow
Each test case begins with a line containing the integer N.
the second line contains N integers. (elements of the array).
the ith ingeter is Ai
Output:
For each test case, output one line containing case #x: y.
where x = test case number starting from 1
y = number of record breaking days

conditions:
1) strictly greater than all previous values
2) strictly greater than following value

sample test case
1  2  0  7  2  0  2  2 
x  /  x  /  x  x  x  x
ii    i     i  i  i  i   condition 1
     ii       ii ii ii   condition 2

brute force approach:
     iteratre over all elements and check if its record breaking day or not
note:To check if Ai is record breakng day, 
    we have to iteratre over a[0].a[1],a[2]..a[i-1]

time compl: O(n)
overall time complex : O(n^2)
Optimisez Approach:
intuition: if we can optimise step 1 then we can optimise our whole sol.
for step 1 optimization : 
    we need to check if 
    a[i]>{a[i-1],a[i-2]....,a[0]}
    which can be written as:
        a[i]> max(a[i-1],a[i-2]....,a[0])
    for this, we need to keep a varianle mx,
        which will store the max value until a[i]
    then we just need to check 
    if : a[i]>max
    a[i] > a[i+1]  {if i+1 < n}

so step 1 time complesxity reduces to O(1)
hence over all time complextiy reduces to O(n);

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n + 1];  // because we need to check i+1th term too and
               //if array ends at n, we cant check i+1th element
    a[n] = -1; // and we initialize it with -1 because thats less than 0 and al;ways staisfies condition
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << "1" << endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx = max(mx,a[i]);
    }
    cout<< ans <<endl;

    return 0;
}