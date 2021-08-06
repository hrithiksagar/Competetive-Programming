// form the biggest number from the numeric string
// 53214 ----> 54321 (Biggest number)
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{    
    string s = "843925781";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
    return 0;
}