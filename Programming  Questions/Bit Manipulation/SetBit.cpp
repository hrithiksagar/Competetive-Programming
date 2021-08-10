#include <iostream>
using namespace std;
/**
 * @brief setbit
 * set bit means = should keep 1 in that place
 * unset means keeping 0 at that pos where our bit needs to be change
 * we do OR
 * as our bit needs to be set there so by or at taht pos if original number is 0 then also along with 0 (0 or 0) will be 1 
 * by doing this the but will SET
 */

int setBit(int n, int pos)
{
    return ((n | (1<<pos)));
}
int main()
{
    cout<<setBit(5,1);
}