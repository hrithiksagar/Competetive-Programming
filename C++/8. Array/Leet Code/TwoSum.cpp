#include <iostream>
using namespace std;
int main()
{
    int n; 
    int a[n];
    int target;
    cin >> n;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = i + 1; j < n + 1; j++)
        {
            if ((a[i] + a[j]) == target)
            {
                cout << a[i] << " " << a[j];
            }
        }
    }
    return 0;
}
// lets have an other approach to optimize 
//time complexity from O(n^2) to :
