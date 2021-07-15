/**
 * problem: you are given an array arr[] of N integers including 0.
 * the Task: find the smallest positive number missing from the array.
 * constraints: 
 *                  1<=N<=10^6
 *              -10^6<=Ai<=10^6
 * 
 * base idea:
 * * build a boolian "check[]" array that will depict if any element x is present
 * * in the array or not
 * * this will keep all the element in the array as false 
 * * ex:  [false,false,false,false,false.......]
 * * then iterate over the array  and mark non negative a[i] as true.
 * now check array is built for ex
 * !    0   -9  1  3 -4 5
 * !    t    t  f  t  f t   using check[]
 * when we see false and taht is our answer so we break it
 * 
 *    
 */ 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >>a[i];
    }
    
    const int N = 1e6+ 2;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i] = false;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i]>=0)
        {
            check[a[i]] = 1;
        }
    }
    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i]==0)
        {
            ans = i;
            break;
        }
    }
    
    cout<<ans<<endl;
    return 0;
    
    
}