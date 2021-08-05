#include<iostream>
#include<string>
using namespace std;
int main(){
    // declaring a string
    // StringKeyword Identifier
    // data type analog s
    string  str;
    //s1 = "fam"  s2 = "ily" // output = family i.e appending 2 string
    string s1 = "fam";
    string s2 = "ily";
    string s3 = "fam";

    // appending have 2 ways and they are
    //1st method
    s1.append(s2);
    cout<<s1<<endl; // family
    // other way 
    cout<<s3+s2<<endl; // family
    s1 = s1+s2;
    cout<<s1<<endl;//familyily
// Appending done!!
    // if we want to access any character in the string

    string s4 = "fam";
    string s5 = "ily";
    cout<< s1[1]<<endl; // a // just provide index number!
    // got to access
    // clear function
    string abc = "sahfkkljbvKLFLBC fkubuckbh ubqFCK";
    cout<< abc<< endl;
    abc.clear();
    cout<<abc<<endl;
    cout<<"abc cleared upside"<<endl;
    return 0;
}