#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    int a[n];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                //cout << a[k] << " ";
                sum += a[k];
            }
            //cout << "\n";
            maxSum = max(maxSum, sum);
        }
    }
    cout<< maxSum <<endl;

    return 0;
}