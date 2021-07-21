#include<iostream>
using namespace std;
int main(){
    // finding frequence of a number in the array!
    int n,x;
    cout<<"Enter number of elements in array"<<endl;
    cin>>n;
    cout<<"Enter number u want to find: "<< endl;
    cin>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(x==a[i]){
            count += 1;
        }
    }

    cout<< count;
    return 0;
}
//