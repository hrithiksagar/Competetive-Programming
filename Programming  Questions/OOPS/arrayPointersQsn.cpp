#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    cout << *arr << endl;
    int *ptr;
    ptr = arr;
    (*ptr)++;
    cout << *arr << endl;
}
