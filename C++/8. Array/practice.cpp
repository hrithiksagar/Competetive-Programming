#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements in array: "<<n<<endl;
    cin>>n;
    int a[n];

    for(int i=0;i<10;i++)
    {
        cout << "Enter a number\n";
        cin >> a[i];
    }
    cout << "Numbers are:\n";
    for(int i=0;i<10;i++)
    {
        cout << a[i] << "\n";
    }


    return 0;
}	