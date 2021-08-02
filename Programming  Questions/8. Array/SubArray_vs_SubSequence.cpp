/*
subarray: continious part of array
# of subarrays with n elements  = nc2 + n = n*(n+1)/2
subsequence: this is a sequence that can be derived from an array by 
selecting 0 or more elements without changing order of other elements
no of subsequences  = 2^n
every subsequence is subarray but not every aubarray is subsequence
Q) sum of all sub arrays:
ans) iterate over alll subarrays
nested loop
for every i = 0 to i = n-1
            j =  i to j = n-1
            output sum[i....j]
*/
//-------------------------------------------------------------------------------------

#include<iostream>
using namespace std;

int main(){
    int n; // n= size of array
    cout<<"Enter the number of elemnets to be in the list: ";
    cin>>n;
    int array[n];

    //use for loop to enter elements inside array
    cout<<"Enter elements of array"<< endl;
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    // to show array that was inputted from user
    cout<<"the array you entered is: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<"=========================="<<"Array building is finished"<<endl;
    cout<<endl;
//-------------------------------------------------------------------------------------
    int curr = 0;
    for(int i = 0; i<n;i++){
        curr  = 0;
        for(int j=i; j<n;j++){
            curr += array[j];
            //cout<<array[j]<< endl;
            cout<< curr <<endl;
        }
    }

    


    return 0;
}