#include <iostream>
using namespace std;
static int x;
class ABC
{
public:
    void incre()
    {
        x++;
        cout << x << endl;
        ;
    }
};
int ABC::x = 0;
int main()
{
    ABC ob1;
    ob1.incre();
    ABC ob2;
    ob2.incre();
    ABC ob3;
    ob3.incre();
}
