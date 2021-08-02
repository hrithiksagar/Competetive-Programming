#include <iostream>
using namespace std;
class A
{
public:
    static int x;
    void SetX()
    {
        x = 20;
    }
    void Display()
    {
        cout << "x = " << x << endl;
    }
};
int A::x = 100;
int main()
{
    A aobj;
    aobj.SetX();
    aobj.Display();
}