#include <iostream>
using namespace std;

class Base
{
private:
    int m1;
    int m2;

public:
    Base()
    {
        m1 = 10;
        m2 = 100;
    }
    friend class dostClass;
    friend int frndFunction(Base &obj);
};
class dostClass
{
public:
    void printFnc(Base &obj)
    {
        cout << "private members of base class can be accessed here in dostClass "
             << obj.m1
             << endl
             << obj.m2
             << endl
             << "end of line friend class execution..."
             << endl;
    }
};
int frndFunction(Base &obj)
{
    cout << obj.m1 << endl
         << obj.m2 << endl;
}

int main()
{
    Base x;
    Base y;
    dostClass z;
    z.printFnc(y);
    frndFunction(x);
    return 0;
}