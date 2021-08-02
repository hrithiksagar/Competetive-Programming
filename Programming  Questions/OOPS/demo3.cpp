#include <iostream>
using namespace std;
class A
{
public:
    int x, y;

    void GetSum()
    {
        cout << "The sum is : " << x * y;
    }
};
int main()
{
    A aobj;
    aobj.x = 20;
    aobj.y = 10;
    aobj.GetSum();
}
