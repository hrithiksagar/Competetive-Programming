// Date: 22nd June 2021
// WAP to reverse a 3 digit integer?
// mentor: MEHER sir @ Cantilever labs.
#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    int number, temp;
    cout<< "Enter only a 3 digit number"<< endl;
    cin >> number;
    // checking if its INTEGER
    cout << typeid(number).name()<<endl; 
    // for 3rd digit
    temp = number % 10;
    cout<< temp <<endl;

    // for 2nd digit
    temp =  number /10 ; 
    //cout<< temp<< endl;
    temp = temp% 10;
    cout<< temp<< endl;

    // for 1st digit
    temp = number /10;
    //cout<< temp<< endl;
    temp =  temp/10;
    cout<< temp <<endl;
    return 0;
}