// print numbers from 1 - 100 with numbers that get divisible by 3 wont get printed
#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
	for (int i = 0; i < 100 ; i++)
    {
        if ( i % 3 ==0)
        {
            continue;
        }
        cout<< i<< endl;
    }
    
    return 0;
}

