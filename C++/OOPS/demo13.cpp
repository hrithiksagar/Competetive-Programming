#include <iostream>
using namespace std;
class T
{
public:
    void f()
    {
        cout << "Hello";
    }
};
int main()
{
    T obj;
    T *p = &obj;
    //int a = p->f();
    //cout<< a;

    return 0;

}