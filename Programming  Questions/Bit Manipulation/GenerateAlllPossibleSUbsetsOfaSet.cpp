#include<iostream>
using namespace std;

/**
 * @brief 
 * print all possible subsets of a set
 * {a,b,c} is the set
 *          abc
 * {}       000     0
 * {c}      001     1
 * {b}      010     2
 * {b,c}    011     3
 * {a}      100     4
 * {a,c}    101     5
 * {a,b}    110     6   
 * {a,b,c}  111     7
 * 
 * using bits to solve this problem
 * these are our numbers form 0 to 7 or 0 to ((2^n) - 1)
 * 
 * 
 */