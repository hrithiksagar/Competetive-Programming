/*
problem: Q) Given an array arr[] of size N. 
Task : find the first repeated element in array of integers.
    i.e An element that occurs more than once and whose index of first 
    occurrence is smallest.
Constraints : 
1<= N<= 10^6
0<= Ai<= 10^6
as per 1 sec only 10^8 operations can be done, but in this constraint is 10^6
so time complesxity should be log(n) or something with log(x)
order of Ai solution can also be done as hint is given by writing about Ai

Base Idea:
to check if a element is repeating, we maintain an array index i.e idx[],
which  stores the first occurance i.e. index of a perticular element a[i].
    (I) Initialise the idx[] with -1 and mininum index i.e. minidx[] with INT_MAX.
    [-1,-1,-1,-1,-1,-1,-1,-1]
      0  1  2  3  4  5  6  7
    (II) then, keep updating idx[], while traversing the given array.

*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>> a[i];
    }
    const int N = 1e6+2;  // declared const because value of N
                         // cant be changed even if someone tries to change it
                        // in the later code thta wont work.
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minidx = INT16_MAX;
    for (int i = 0; i < N; i++)
    {
        if (idx[a[i]] != -1)        
        {
            minidx = min(minidx, idx[a[i]]);
        }
        else{
            idx[a[i]] = i;
        }
        
    }
    
    if (minidx == INT16_MAX)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<minidx + 1 << endl;
    }
    

    return 0;
}