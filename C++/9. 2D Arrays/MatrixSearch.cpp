/**
 * @file MatrixSearch.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-17
 * 
 * @copyright Copyright (c) 2021
 * PROBLEM: 
 * ! given 2d matrix nxm, integers in eac row are sorted in ascending from left to right, 
 * !and interes in each column are sorted in ascendingf from top to bottom
 * !burte firec approach
 *  compare all the elements if found return true else false
 * for i in o to n:
 *      for j in o to M:
 *          if matrix[i][j] == target
 *              return true;
 * return false
 * Time compleity is O(nm)
 * to make it optimize:
 * !brain stroming:
 *      1  4  7 11
 *      2  5  8 12
 *      3  6  9 12
 *     10 13 14 17 
 * target is 10:
 * 10 less than 11, so move to left
 * 10 > 7 so move bottom
 * 10> 8 so move bottom
 * 10>9 so move bottom
 * 10 < 14 so move left
 * 10<13 so move left
 * hence 10=10, found
 * here on every element we get choice if we have to move to left or right
 *     <x x
 *       >x  
 * 
 * !pseduo code:
 * always start from top right element
 * if we are at (r,c):
 *      if(matrix[r][c] == target)
 *          return true
 *      if(matriox[r][c] > target)
 *          c--
 *      else
 *          r++
 * time complexity: 
 *  
 */

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    int r = 0, c = m - 1; // hence starting with the top right element
    bool found = false;
    while (r < n and c >= 0)
    {
        if (mat[r][c] == target)
        {
            found = true;
        }
        if (mat[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "element found" << endl;
    }

    else
    {
        cout << "element not exists" << endl;
    }
}