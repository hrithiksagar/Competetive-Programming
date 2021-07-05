/* find min element in unsprted array and swap it with the elemenr at the beginnening
first lets have an unsorted array.
find min element
swap it to begenning.
now again rest part is again unosrted, now find min ele in that 
and swap it with the beg element of this unsorted array and keep repeating this.

in coding:
use 2 loops
i = 1st ele to 2nd last ele
j = i+1 to nth(last) element
then compare it the with the first element.
then swap if smaller.
and keep repeating this as its a loop
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
    for(int i=0;i<n-1;i++){
        for(int j= i+1;j<n;j++){
            if(array[j]< array[i]){
                int temp = array[j];
                array[j]= array[i];
                array[i] = temp;
            }
        }
    }
    cout<<"your elements after sorted: ";
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;

}