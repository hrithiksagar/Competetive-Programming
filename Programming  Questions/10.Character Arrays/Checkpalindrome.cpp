/**
 * @file Checkpalindrome.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-17
 * 
 * @copyright Copyright (c) 2021
 *  checking if any number is palindrome
 * number same from front and back
 * nitin
 * anna
 * racecar
 * approach:
 * if first and last elemnets same- move forward with nedxt element
 * if 2nd char and 2nd last character same then move forward repeate
 * if not its not a palindrome
 */
#include <iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool check = 1; // to know if condition if true or false
    for (int i = 0; i < n; i++) 
    {
        if (arr[i]!= arr[n-1-i]) // again -i is because: now i loop ios running, but tp move to next loop at same time, 2nd elements should be checking 2nd last element soo -i
        {
            check = 0;
            break;
        }
        
    }
    //finally if condition breaks and check is true the word is palindorme, so to code that
    if (check == true)
    {
        cout<< "Yayy! its palindrome!🤗"<<endl;
    }
    else{
        cout<<"😬 its not palindrome"<<endl;
    }
    
    
    return 0;
    
}