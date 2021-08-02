#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    int y;
    void Set(int x, int y)
    {
        x = x;
        y = y;
    }
    void Display()
    {
        cout << "x = " << y << " y = " << x;
    }
};
int main()
{
    A aobj;
    aobj.Set(10, 20);
    aobj.Display();
}
