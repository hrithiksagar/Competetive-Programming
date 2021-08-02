//saying hello in different languages.
// this is one way of doing it, without using switch method
#include<iostream>
using namespace std;
int main(){
    char button;
    cout<<"Enter a character: ";
    cin>> button;
    if (button== 'a'){
        cout<<"Hello"<<endl;
    }
    else if(button== 'b'){
        cout<<"Namaste"<<endl;
    }
    else if(button == 'c'){
        cout<<"Salut"<<endl;
    }
    else if(button == 'd'){
        cout<<"Ciao"<<endl;
    }
    else if(button == 'e'){
        cout<<"Hola"<<endl;
    
    }
    else{
        cout<<"im still learning"<<endl;
    }

    return 0;
}