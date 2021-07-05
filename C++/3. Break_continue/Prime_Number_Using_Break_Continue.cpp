#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	int n;
    cout<< "enter a number"<< endl;
    cin>> n;
    int i;
    for(int i=2; i<n;i++){
        if(n%i == 0){
            cout<<"Not a Prime"<< endl;
            break;
        }
    }
    if(i==n){
        cout<<"Prime Number"<<endl;

    }
    return 0;
}

