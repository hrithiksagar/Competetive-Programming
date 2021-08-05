#include<iostream>
#include<string>
using namespace std;
int main(){
    // declaring a string
    // StringKeyword Identifier
    // data type analog s
    string  s1 = "abc";
    string s2 = "xyz";
// Comparing
    cout<<s2.compare(s1)<<endl; // ouput is 23, whats is that? xyz is bigger than abc and its positive, lexicographicaly xyz is bigger than abc
    string  s3 = "abc";
    string s4 = "abc";     
    if(s3.compare(s4) == 0)
    {
        cout<< "Strings Are Equal"<<endl;
    }
    // same thing can be written as;
    if(!s3.compare(s4))
    {
        cout<< "Strings Are Equal"<<endl;
    }
//  to check if string empty
    string s5 = "abc";
    s5.clear();
    cout<<s5<<endl;
    if (s5.empty())
        cout<<"String is EMPTY"<<endl;
    // to see if string is not empty
    if(!s1.empty())
        cout<<"String s1 is NOT empty"<< " S1 is: "<<s1 <<endl;
// erase Function
    string s6 = "nincompoop";
    // 3rd index character to until m i want to erase so to do that
    s6.erase(3,3);
    cout<< s6<<endl; //ninpoop
// find Function
    // if i want to know if com is present in s6
    string s7 = "nincompoop";
    cout<<s7.find("com") <<endl; // 3
    cout<<s7.find("poo") <<endl; // 6

// insert function
    string s8 = "nincompoop";
    //       pos  string
    s8.insert(2, "lol");
    cout<<s8<<endl;//nilolncompoop
// size of string
    cout<< s8.length() <<endl;//13
    cout<< s8.size()<<endl;//13
// Iterating String
    for (int i = 0; i < s8.length(); i++)
    {
        cout<< s8[i]<< endl;
    }
    // output:
// n
// i
// l
// o
// l
// n
// c
// o
// m
// p
// o
// o
// p

// to get substring of any string
    string s9 = "nincompoop";
    //parameters: from which index and upto how many elements
    cout<< s9.substr(6,4) <<endl; // poop

// numeric string
    string s10 = "786";
    // convert this to integer
    int x = stoi(s10);
    cout<< x<< endl;
    cout<< x+2<<endl;
    // Converting Integer to String
    int y = 123;
    cout<< to_string(y)+"2"<< endl;// 1232

    return 0;
}