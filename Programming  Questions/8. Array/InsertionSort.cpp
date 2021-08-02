/*
Insertion sorting technique: 
insert an element from unsorted list to its correct position in sorted list.
12, 45, 23, 51, 19, 8
lets take 23.
it can be inserted between 12 and 45, hence 45 is moved one position above and
23 is moved one pos below
12, 23, 45, 51, 19, 8
51 is in correct position
lets see for 19, 
move all elements from 2nd element to one position forward and move 19 to 2nd position. 
12, 19, 23, 45, 51, 8
lets take 8
8 should be in 1st pos
all are moved 1 pos forward
and 8 is moved to 1st pos
coding: 

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
    cout<<"============================="<<"Array building is finished"<<endl;
    cout<<endl;
    
    // insertion sorting technique
    for(int i =1; i<n;i++){
        int current = array[i];
        int j = i-1;
        while(array[j]>current && j>=0){
            array[j+1]= array[j];
            j--;
        }
        array[j+1] = current;
    }
    for(int i=0; i<n; i++){
        cout<< array[i] << " ";
    }


    return 0;
}

