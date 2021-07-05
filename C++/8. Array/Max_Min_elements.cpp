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
    // now finding maximum and minimum elements of the array:
    // check all elements compare each element with max and min and update accordingly
    int maxx=INT16_MIN;
    int minn=INT16_MAX;
    //loop to check if the number is more than max number
    /* this can be written for traditional way: 
    for(int i=0;i<n;i++){
        if(array[i]>maxx){
            maxx = array[i];
        }
        if(array[i]<minn){
            minn = array[i];
        }
    }
    */
   // this is other way of using inbuilt finctions to find max and min
    for(int i=0;i<n;i++)
    {
        maxx = max(maxx,array[i]);
        minn = min(minn, array[i]);
    }
    cout<<"Maximium element: "<<maxx<<endl;
    cout<<"Minimum elemenet: "<<minn<<endl;

    return 0;
}
