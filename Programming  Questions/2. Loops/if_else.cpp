#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int savings;
    cin>> savings;
    if (savings>5000)
    {
        if (savings>100000) 
        {
            cout <<"a\n";
        }
        else
        {
            cout<< "aa\n";
        }
        cout << "A \n";
    }
    else if (savings>2000)
    {
        cout<<"C\n";
    }  
    else
    {
        cout << "B \n";
    }
    return 0;
}
