#include <iostream>
using namespace std;
class A
{
public:
    int a;
    int b;
    // function overloading
    int add()
    {
        cout << "Hello" << endl;
        return 1;
    }
    void add(int a)
    {
        cout << a;
    }
    // + operator overloading
    void operator+(A &obj)
    {
        int value1 = this->a;
        int value2 = obj.b;
        cout << "the value is " << value1 - value2 << endl;
    }
    // () overloading
    void operator()(int a)
    {
        cout << "this is bracket overloaded ";
    }
};
int main()
{
    A x;
    A obj;
    x.add();
    x.add();
    A obj1, obj2;
    obj1.a = 7;
    obj2.b = 4;
    obj1 + obj2;
    obj(100);
    return 0;
}