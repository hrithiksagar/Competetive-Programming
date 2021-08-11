#include<iostream>
using namespace std;
/**
 * @brief 
 * n & n-1 = has same bits as n expect the rightmost set bit
 * https://www.youtube.com/watch?v=s8l8NWII3qw&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=35&ab_channel=ApnaCollege
 * n =19 = 01011
 * n-1 = 18 = 01010
 * n&n-1 = 01011 & 01010
 *         01010 = 18
 *         compare with 19
 *         only right most 1 is the difference
 *
 *  n = 18 = 01010
 * n-1 =17 = 01001
 * n&n-1 = 18&17 = 01010 & 01001
 *                 01001 =16
 * n & n-1
 */
int numberofOnes(int n)
{
    int count= 0;
    while(n)
    {
        n = n&(n-1);
        count++;
    }
    return count;
}
int main()
{
    cout<< numberofOnes(19)<<endl;
    return 0;
}