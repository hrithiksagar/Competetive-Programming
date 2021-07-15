#include <iostream>
using namespace std;
class AAA
{
public:
    int a, b;
    void Display()
    {
        cout << a << " " << b;
    }
};
int main()
{
    AAA aobj;
    aobj.Display();
}
