/**
 * @file intro.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-17
 * 
 * @copyright Copyright (c) 2021
 * 
 * it is array of characters
 *  declaration
 * char arr[n+1]; // we take size as n+1, last one is null character 
 * its need?
 * null chracter = to understand where does a word end.
 * like a space bar represented as = '\0'
 *  
 */
#include <iostream>
using namespace std;
int main(){
    char arr[100] = "apple";
    int i=0;
    while (arr[i]!= '\0') 
    {
        /* code */
        cout<<arr[i]<< endl;
        i++;
    }
    return 0;
    
}