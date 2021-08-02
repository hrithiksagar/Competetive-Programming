#include<iostream>
using namespace std;
int main(){
    // taking input an matrix
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    // printing out matrix
/*
    cout<< "Entered matrix is: "<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    total we have 4 variables:
    1) row_start 
        initially 0
    2) row_end
        initially, n-1
    3) column_start
        initially,0
    4) column_end
        Initially, m-1

    we have 4 tupes of traversal
    1) row_start +1
    2) column_end-1
    3) row_end -1 
    4) column_start +1
    until 
    row_start <= row_end
    column_start <= column_end


    2d matrix: 
    
    1  5  7  9  10 11
    6  10 12 13 20 21
    9  25 29 30 32 41
    15 55 59 63 68 70
    40 70 79 81 95 105

    spiral order: 1 5 7 9 10 11 21 41 70 105 95 81 79 70 40 15 9 6 10 12 13 20 32 68 63 59 55 25 29 30 
    */
    // spiral order print logic
    int row_start=0 , row_end=n-1;
    int column_start =0 , column_end= m-1;
    while (row_start<=row_end && column_start<=column_end)
    {
        // for row_start
        for (int col = column_start; col <= column_end; col++)
        {
            cout<< a[row_start][col] << " ";
        }
        row_start++;
        //for Column_end
        for (int row = row_start; row <= row_end; row++)
        {
            cout<< a[row][column_end] << " ";
        }
        column_end--;
        //for row end
        for (int col = column_end; col >= column_start; col--)
        {
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        for (int row = row_end; row >= row_start; row--)
        {
            cout<< a[row][column_start]<<" ";
        }
        column_start++;
        
        
    }
    
    
}