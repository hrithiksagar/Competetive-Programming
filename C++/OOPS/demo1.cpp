#include <iostream>
using namespace std;
class ABCD
{
    
    int x;
public:
    void init()
    {
        x = 0;
        x++;
        cout << "X value " << x << endl;
    }
};
int main()
{
    ABCD ob1;
    ob1.init();
    ob1.init();
    ob1.init();
}
