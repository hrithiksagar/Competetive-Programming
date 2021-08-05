#include<iostream>
#include<string>
using namespace std;
int main(){
    // declaring a string
    // StringKeyword Identifier
    // data type analog s
    string  str;
    string str1(5, 'n');
    cout<< str1<<endl; // nnnnn
    string str2 = "HrithikSagar";
    cout<<str2<<endl; // HrithikSagar
    // inputing string with space i.e. entering a statement which will have spaces too in that
    string str3;
    getline(cin, str3); // take input // hrithik sagar is determined
    cout<< str3<<endl; // hrithik sagar is determined

    // if we use cin
    string str4;
    cin>>str4; // hrithik sagar is determined
    cout<<str4<< endl; //hrithik // output only displays until it sees first space
    // thats why we use getline for strings

    
    return 0;
}