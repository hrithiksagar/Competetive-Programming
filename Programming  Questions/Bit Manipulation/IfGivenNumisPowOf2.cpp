#include <iostream>
using namespace std;
/**
 * @brief
 * using bit manipulation for this:
 * Patterns are:
 * n = 6 = 0110
 * n-1 = 5 = 0101 = left flip for right most 1 of n and right most 0 of n
 * 01 1 0
 * 01 0 1
 * =============
 * example= 
 * n =  8 = 1000
 * n-1= 7 = 0111
 * Explanation= 
 * right most 1 in n, flip it, then flip left most Elements
 * 1 0 0 0
 * 0 1 1 1
 * ================
 *  what if we use & in between N and N-1 element
 * (n & n-1)
 * ans = 
 * ans will have same bits as n expect the right most set bit
 * 6 and 5
 * 0110 & 0101 = 0100
 * explaintation
 * ans is 0100
 * if we compae it with n i,e, 6
 * 0110 0100
 * only diff is right most SETBIT
 * this is because as right most set bit si getting flipped to become 0, and rest all 0s become 1
 * when we keep AND btw them, diff will be only for rihgt most set bit
 * 
 * 
 * 
 * 8 and 7
 * 1000 & 0111 = 0000
 * Explaination:
 * 0000
 * this is only 1 bit diff from n
 * that is right most set bit
 * now here we can use this pattern to use
 * to find if any number is power of 2
 * when we write it in binaruy format
 * only bit is set
 * 8 =      1000
 * n-1=7  = 0111 
 * n & n-1 = 0 
 * always^
 * 
 */

bool powerof2(int n)
{
    return (n && !(n & n - 1)); // base case is when n = 0, in that case n-1 cant be there so we use "n &&"
}
int main()
{

    cout << powerof2(14) << endl;
    cout << powerof2(16) << endl;
    return 0;
}