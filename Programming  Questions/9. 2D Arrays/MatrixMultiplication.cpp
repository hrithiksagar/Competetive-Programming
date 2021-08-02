/**
 * @file MatrixMultiplication.cpp
 * @author Hrithik Sagar
 * @brief 
 * @version 0.1
 * @date 2021-07-12
 * 
 * @copyright Copyright (c) 2021
 * 
 *  ! task = given 2 matrices of 2D, of size n1xn2 and n2xn3, multiply these and output multiplied matrix
 * contraints:
 *  1<= n1,n2,n3<= 300
 * dry run::
 * first step :: (1st row of one matrix )* (1st column of other matrix)
 * second step:: (1st row of one matrix )* (1st column of other matrix)
 * third step :: (1st row of one matrix )* (1st column of other matrix)
 *  this all is for getting first row of new matrix
 * and repraate it with same fashion for 2nd 3rd row
 * APPROACH::
 * 1. make anested loop for order 3
 *      in the outer loop, iterate over rows of first matrix and
 *      in the inner loop, iterate over columns of 2nd matrix
 * 2. now multiply rows of 1st matrix weith the columns of 2nd matrix in the innermost loop and update in the answer matrix
 * so for loop looks like:
 * for i = 0 to n1
 *     for j = 0 to n3
 *         for k = 0 to n2 
 *             ans[i][j]= m1[i][k]*m2[k][j]
 * 
 */
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    // declaring 2 matrices
    int m1[n1][n2];
    int m2[n2][n3];
    int ans[n1][n3];
    // creating them
    // 1st matrix
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> m1[i][j];
        }
    }
    // 2nd matrix
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> m2[i][j];
        }
    }
    // declaring and initializing answer as its a matrix
    
    // we initialize this ans array with 0;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            ans[i][j] = 0;
        }
    }
    // main logic
    //now we make order 3 nested loop to calculate 2 matrices
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++) // because it has n3 columns
        {
            for (int k = 0; k < n2; k++)
            {
                ans[i][j] += m1[i][k] * m2[k][j]; /* because k denotes column */
            }
        }
    }
    // this displays answer matrix
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}
