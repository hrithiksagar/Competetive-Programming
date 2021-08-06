#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{    
    string str = "eJSBAJLCJZLFKWHNWKBdsabvkifhILCNEKLb";
    cout<< 'a' - 'A'<<endl; // 32 : this is ascii a - ascii A
    // to Convert to  fully uppercase
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'a' && str[i]<= 'z')
        {
            str[i] -= 32;
        }
    }
    cout<< str<<endl;//EJSBAJLCJZLFKWHNWKBDSABVKIFHILCNEKLB
    
    // making them to lower case:
   for (int i = 0; i < str.size(); i++)
    {
        if(str[i] >= 'A' && str[i]<= 'Z')
        {
            str[i] += 32;
        }
    } 
    cout<< str<< endl; //ejsbajlcjzlfkwhnwkbdsabvkifhilcneklb
    return 0;
}