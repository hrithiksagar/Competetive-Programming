#include <iostream>
using namespace std;
class Test
{
private:
    int x, y;

public:
    Test()
    {
        x = 10;
        y = 5;
    }
    Test(int p, int q)
    {
        x = 100;
        y = 50;
    }
    int GetSum()
    {
        return x + y;
    }
};
int main()
{
    Test *t1 = new Test(50, 30);
    cout << t1->GetSum();
}
