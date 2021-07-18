#include <iostream>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>arr[i];
    // }
    int a[9] = {34,56,54,32,67,89,90,32,21};
    for (int i = 0; i < 9; i++)
    {
        /* code */
        cout<<a[i]<<",";
    }
    cout<<endl;
    //reverse order
    for (int i = 8; i >= 0; i--)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
    return 0;
}
    
    

