// "YZX" ---->(SORT) "XYZ"
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    // declaring a string
    // StringKeyword Identifier
    // data type analog s
    string  s1 = "zyx";
    // wanna sort chracters
    // use inbuilt sort funciton
    sort(s1.begin(), s1.end());
    cout<<s1<<endl;
    // lexicographically first elements will be output
    // xyz

    return 0;
}