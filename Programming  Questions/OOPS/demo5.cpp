#include <iostream>
using namespace std;
class Calc
{
public:
    int x, y, total;
    Calc add(Calc obj1)
    {
        obj1.total = obj1.x + obj1.y;
        return obj1;
    }
};
void init(int v1, int v2)
{
    Calc ob1;
    ob1.x = v1;
    ob1.y = v2;
    Calc retobj = ob1.add(ob1);
    cout << retobj.total << endl;
}
int main()
{
    int a, b;
    a = 10;
    b = 15;
    Calc ob;
    init(a, b);
}
