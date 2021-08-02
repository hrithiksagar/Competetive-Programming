/*
take half of the list, check if it comes under this part of the otehr part.
ex: facebook search
its time complexity  = O(log(n))
elements should be in sorted order.
key elmenet is started to be search form mid element, comapre with it.
array is being halfed all the time.
*/
#include<iostream>
using namespace std;

int binarySearch(int array[], int n, int key){
    int s = 0;
    int e = n;
    while(s<= e){
        int mid = (s+e)/2;
        if(array[mid] == key){
            return mid;
        }
        else if(array[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}
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
    int key;
    cout<<"Enter the key value that u want to search for"<<endl;
    cin>> key;
    cout<<endl;

    cout<<binarySearch(array, n,  key);
    return 0;
}
/*
time complexity:
after 1st iteration: length of array = n
      2nd                            = n/2
      3rd                            = n/(2^2)  
      .
      .
      .
      .
      kth          : Length of array = n/(2^k)  

let after k iterations, length of array = 1
then --> 
n/(2^k) = 1
n = 2^k
.
.
.
      (n)
k = log        // using logarithemic formulas
       2


time complexity = O(log(n)(base)2)
hence this is better Searching algorithm than linear search
*/ 