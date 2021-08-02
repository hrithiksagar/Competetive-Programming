#include<iostream>
using namespace std;
// array size =  int*(number of list) // size of int= 4 bytes.
// its a block of memory
// int array[4] = {1,    2,     3,     4     };
//                arr[0],arr[1],arr[2],arr[3]
//size = 4*4 = 16 bytes
// arrays are in hexadecimal form
int main(){
    int arra[4];
    arra[0]=1;
    arra[1]=2;
    arra[2]=3;
    arra[3]=4;
    // | this is one way of declaration
    // other way is:
    int arr[4] = {10,20,30,40};
    cout << arr[3] <<endl; //output should be "40"

//----------------------------------------------------------
    // to initialize array we need its size
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


}
