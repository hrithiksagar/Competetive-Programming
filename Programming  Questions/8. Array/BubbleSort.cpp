/*
repeatedly sort 2 adjacent elemenets in they are in wrong order.
left > right then wrong order, then swap them.
but we dont get sorted array in this way.
max element is in lat positio bnut restvare not in their position.
so we do repeate same procedure again. and again until u get sorted array.

coding: 
have n-1 iterations in max.
if we have n elementes array then n-1 iterations are to be done to get sorted array.
here we are checking till n-1, for 2nd iteration n-2, 3rd iteration n-3,..........
elemenet check iteration is element - 1
ith iteration -- n-i tak check karenge
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
 
    int counter = 1;
    while(counter < n){
        for(int i =0; i<n-counter;i++){
            if(array[i]>array[i+1]){
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;

            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;


    return 0;
}