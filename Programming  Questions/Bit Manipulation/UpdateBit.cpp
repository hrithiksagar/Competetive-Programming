#include<iostream>
using namespace std;
/**
 * @brief 
 * follow same procedure for doing clearbit
 * original num = 0101
 * suppose we need to update i = 1 to 1
 * 1<<i = 0010
 * ~0010 = 1101
 * 0101 $ 1101 = 0101
 * Method: 
 * the pos we need to update, we clear it first
 * then at that pos, we need to set out bit
 * 
 * update = clearBit + SetBit
 *             AND        OR
 * 
 */

int updateBit(int n, int pos, int value)
{   
    int mask = ~(1<<pos);
    n = n & mask;
    return (n | (value<<pos));
} 
int main()
{
    cout<< updateBit(5,1,1);    
}