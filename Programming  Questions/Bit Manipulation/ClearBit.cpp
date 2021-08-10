/**
 * @file ClearBit.cpp
 * at given position should keep 0 whatever the bit might be
 * suppose at i = 2
 * we need to clear
 * n = 0101
 * 1<<i = 0100
 * we do 1s compliment
 * ~0100 = 1011
 * all bits of this numbers gets flipped
 * by this, the pos where we need to clear taht pos wil have 0 and rest all pos we have 1
 * then we do AND with original number
 * when we AND this with original numner
 * whatever in that pos will be 0 and we get our ans
 * 
 */
#include<iostream>
using namespace std;

int clearBit(int num, int pos)
{
    int mask = ~(1<<pos);// due to as we are doing masking wrt top whcih bit corresponding we are putting 0 and 1
    return (num & mask);
}
int main()
{
    cout<< clearBit(5,2);
}