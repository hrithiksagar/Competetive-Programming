/**
 * * given a square matrix A and its number of rows or column N, return the 
 * * transpose of A;
 * ! constraints: 
 * 1<= N<=1000
 * 1 2 3
 * 4 5 6 
 * 7 8 9
 * transpose of this is:
 * !     1 4 7
 * *     2 5 8 
 * todo: 3 6 9
 * rows interchanged with columns
 * (i,j) will be swapped to (j,i)
 * row     will become columna &
 * column  will become row
 * only diagnoal elemnetsb will be swapped diagonal will be same
 */

#include <iostream>
using namespace std;
int main()
{
    // predefined array
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        cout<<"matrix before transpose"<<endl;
    //showing predefind array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    //----------------------------------------------

    for (int i = 0; i < 3; i++)
    {
        for (int j = i; j < 3; j++) // j started with i because column wrt row should be big than ro, cause of this we wil be able to just diagnoally upper traiangle elements will be swapped
        {
            /* swapping */
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
            // swapping done
        }
    }
    cout<<"=========================="<<endl;
    cout<<"matrix after transpose"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}