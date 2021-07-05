//saying hello in different languages.
// this is one way of doing it, without using switch method
#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter a character: ";
    cin>> button;
    switch (button)
    {
    case 'a':
        cout<<"Hello"<<endl;
        break;
    case 'b':   
        cout<<"hola"<<endl;
        break;
    case 'c':
        cout<<"namaste"<<endl;
        break;   
    case 'd':
        cout<<"Salut"<<endl;
        break;         
    case 'e':
        cout<<"Hi"<<endl;
        break;          
    default:
    cout<<"Still learing"<<endl;
        break;
    }
    return 0;
}