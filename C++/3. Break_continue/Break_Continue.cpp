#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    int pocketmoney;
    cout<< "enter pocket money" << endl;
    cin>> pocketmoney;
    
    for (int date= 1; date <= 30;date++)
    {
        if (date %2 ==0)
        {
            continue;
        }
        if(pocketmoney == 0){
            break;
        }
        cout<<"Go Out Today!!"<<endl;
        pocketmoney = pocketmoney -300;
    }
    return 0;
}
