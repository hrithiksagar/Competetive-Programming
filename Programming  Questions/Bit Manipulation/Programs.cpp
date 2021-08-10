#include <iostream>
using namespace std;


/** get bit at perticular position
 *n = 0101
 * suppose we need to get bit at position, i = 2
 * we use left shift for this 
 * 1<<i = 0100
 * then we do AND 
 * 0101 & 0100 = 0100 : by this we get 
 * then
 * if n & (1<<i) != 0 then bit is 1
 *  
*/

int getBit(int n, int pos)
{
    return ((n & (1<<pos)) != 0);
}

int main()
{
    cout << getBit(5, 2);
    return 0;
}