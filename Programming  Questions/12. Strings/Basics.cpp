/**
 * @file Basics.cpp
 * !character array                 vs      string:
 * need to know size beforehand             no need 
 * larger size required for operations      performing operations like concatenation and append is easier 
 * no terminating extra char                terminated with a special character '\0'
 **============================================================================================================= 
 */

#include<iostream>
#include<string>
using namespace std;
int main(){
    // declaring a string
    // StringKeyword Identifier
    // data type analog s
    string  str;
    cin>>str;
    cout<<str;
    return 0;
}