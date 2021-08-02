/*
Q) given an problem array a[] of size n, for every i from 0 - n-1,
   output max(a[0], a[1],a[2],.....,a[i]). 
----
ex :        1 0 5 4 6 8
            0 1 2 3 4 5 
max till i  1 1 5 5 6 8
approach:
1) keep a variable mx which stores the maximum till ith element
2) iterate over the array and update
time complexity is n caiuse only 1 loop
-----
*/
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
    cout<<endl;
    cout<<"=========================="<<"Array building is finished"<<endl;
    cout<<endl;
//-------------------------------------------------------------------------------------
    // solution for the problem
    int mx = -19999999;
    for(int i=0;i<n;i++){
        mx = max(mx, array[i]);
        cout<< mx<< endl;
    }

//-------------------------------------------------------------------------------------
    return 0;
}