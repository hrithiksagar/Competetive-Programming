#include <iostream>
using namespace std;
class Test
{
public:
    void Display()
    {
        cout << "All the best\n";
    }
};
int main()
{
    Test *t1 = new Test();
    t1->Display();
}
