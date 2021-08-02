#include <iostream>
using namespace std;
class A
{
public:
    void Display()
    {
        cout << "This is Display from A\n";
    }
    void Display()
    {
        cout << "This is Display - outside A\n";
    }
};
int main()
{
    A aobj;
    Display();
    aobj.Display();
}