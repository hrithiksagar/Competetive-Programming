#include <iostream>
using namespace std;
class AAA
{
protected:
    int a;

public:
    int b;
    void Display()
    {
        cout << a << " " << b;
    }
};
int main()
{
    AAA aobj;
    aobj.a = 100;
    aobj.b = aobj.a + 50;
    aobj.Display();
}
