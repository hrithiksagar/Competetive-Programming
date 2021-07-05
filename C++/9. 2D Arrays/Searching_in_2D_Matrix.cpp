#include<iostream>
using namespace std;
int main(){
    // taking input an matrix
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    // printing out matrix

    cout<< "Entered matrix is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    // searching 
    int x; // number we ant to search
    cin>>x;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                cout<<i<<" "<<j<<"\n";
                flag = true;
            }
            
        }
        
    }
    if (flag)       
    {
        /* code */
        cout<<"element is found \n ";
    }
    else{
        cout<<"element is not found \n";
    }
    
    
}