/**
 * @file LargestWordInASentance.cpp
 * traverse until we get space i.e. '\n'
 * check if its less or greater than the answer variable, just declafre any answer variale as 0
 * and if its more update answer with new value if its less then dont
 * 
 * 
 */
#include <iostream>
using namespace std;
int main(){
    // enter the number of words
    //cout<<"enter the number of words"<<endl;
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    // inputting a "sentance" this is a tricky thing, to do this follow:
    cin.getline(arr,n);// it allws to enter full sentance along with space
    cin.ignore(); // used to clear buffer can even use flish
    int i =0;
    int currLen = 0;
    int maxLen = 0;
    int st = 0, maxst = 0; // st =analog s of current length;  maxst = analog s of maxlength
    while (1) // iterate until its true
    {

        if (arr[i]==' ' || arr[i] == '\0') // if there is a space
        {
            if (currLen>maxLen)
            {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0; // when space comes, new word wil start hence to make it form first again
            st = i+1;  
        }
        else 
        currLen++; // if theres no space just a word
        if (arr[i]== '\0')
        {
            break;
        }
        i++;
        
    }
    cout<<maxLen<<endl;
    for (int i = 0; i < maxLen; i++)
    {
        cout<<arr[i+maxst];
    }
    
    
    
    return 0;
    
}