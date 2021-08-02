/*
problem: 
Q) Sarasvati has an array of N non negative numbers.
the ith integer of array is "Ai". she wants to choose a contiguous arithamatic 
"Subarray" from her array that has the maximum length. Please help her determine
the length of the longest contiguous arithamatic "subarray"
CONCEPT: 
arithamatic array: array tht contanins atleast 2 integers, and the difference
between consecutive integers are equal
ex: [9,10],[3,3,3] and [9,7,5,3] are arithamatic arrays
    [1,3,3,7], [2,1,2], [1,2,4] are NOT Arithamatic arrays

input: 
first line of input gives the number of test cases T.
T teset cases follow
each test case begins with a line containing the integer N
the second line contains N integer.
the i-th ingeter is "Ai"
output: 
for each test case, output one line containing case #x: y,
where x = test case number (starting from 1)
y= length of longest contiguous arithamatic subarray
Constraints:
time limit = 20 seconds per test set
memory limit = 1gb
1<= T<= 100
0<= Ai <= 10^9
test set 1:
2<= N<= 2000
Test set 2:
2<= N<= 2*10^5 for atmost 10 test cases
for the remaining cases, 2<= N<= 2000;

UNDERSTAING CONSTRAINTS:
in 1 sec = 10^8 Operations can be performed approx
so in 20 sec = 2 * 10^9 operations is the limit
but in test case 2:
2<= N<= 2*10^5
N  = 2*10^5 
N^2 = 4* 10^10 whcih is higher than 2 * 10^9 and this is the limit exceeding 
henvce gives error
memory element: we have 1gb
memory limit exceed when alocate more moemorylike more than Glabally 10^8 array size 
time complexity will be  depending on the looping element
here N, cause loop is on N

sample test case:   
        array     [10,7,4,6,8,10,11]
       difference:  -3 -3 2 2 2 1 // 7-10 = -3 , 4-7= -3, 6-4=2, ...,11-10=1.
in this maximum length subarray whose consecutive elements differnece is equal is 
(-3,-3) and (2,2,2)
length are 3 and 4 // (10,7,4) gives -3,-3 and (4,6,8,10) gives 2,2,2 hence 
maximum length of 3 and 4 is 4 
therefore answerr is 4.
[4,6,8,10]
length is 4 hence answer is 4
intutition and approach to solve:
--> Loop over the array and find the answer
maintain the following variables:
    1. previous common difference          (pd)  // to compare it with current common difference
    2. Current arithamatic subarray length (curr) // it denpotes current arithamatic length including Ai
    3. max arithamatic subarray length     (ans)  // it denotes arithamatic subarray length which is answer 

answer can be 2 cases
case 1: 
previous common difference  == current common difference i.e. a[i] - a[i-1]
then current answer increases by 1
and answer is maximum of (ans and current answer)
case 2: 
previous common difference is not equal to current answer difference
then we will update currenr answer to 2 // because any arithamatic subarray
will start with 2 digits like thats the minimum subarray ever possible such as 
[2,2] and [1,1]..etc




hyyypp
 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans  =2 , pd = a[1] - a[0], j =2 , curr = 2;
    while (j < n)
    {
        if(pd == a[j]-a[j-1]){
            curr++;
        }
        else{
            pd = a[j]-a[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
    cout<<ans<<endl;

}