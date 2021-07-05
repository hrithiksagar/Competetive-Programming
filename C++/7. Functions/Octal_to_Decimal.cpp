#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
int BinaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y= n%10;
        ans  += x*y;
        x *= 2;
        n /= 10;
    }
    return ans; 
}

int OctalToDecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0){
        int y= n%10;
        ans  += x*y;
        x *= 8;
        n /= 10;
    }
    return ans; 
}
int HexadecimalToDecimal(string m){
    int ans = 0;
    int x =1;
    int s = m.size();
    for(int i=s-1; i>=0; i--){
        if(m[i]>= '0'  && m[i] <= '9'){
            ans += x*(m[i]-'0');
        }
        else if(m[i]>='A' && m[i]<= 'F'){
            ans += x*(m[i]-'A'+10);
        }
        x *= 16;
    }
    return ans;
}
int32_t main(){
    int n;
    string m; //for hexadecimal
    cin>>n;
    cin>>m;
    cout<<BinaryToDecimal(n)<<" :Binary"<<endl;
    cout<<OctalToDecimal(n)<<" :Octal"<<endl;
    cout<<HexadecimalToDecimal(m)<<" :HexaDecimal"<<endl;

}