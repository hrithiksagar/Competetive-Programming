#include <iostream>
using namespace std;
class A
{
private:
    int a;
public:
    void SetA(int a)
    {
        a = a;
    }
    void Incr()
    {
        ++a;
        a++;
    }
    void Display()
    {
        cout << "a = " << a;
    }
};
int main()
{
    A aobj;
    aobj.a = 20;
    aobj.Incr();
    aobj.Display();
}
