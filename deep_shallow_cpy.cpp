#include <iostream>
using namespace std;

class shallow
{
private:
    int a, b;

public:
    shallow()
    {
        cout << "object created here and shallow copy starts" << endl;
    }
    void setVal(int h, int x)
    {
        a = h;
        b = x;
    }
    void getVal()
    {
        cout << "the values are:" << endl
             << a << endl
             << b << endl;
    }
    // copy constructor
    shallow(shallow &obj)
    {
        a = obj.a;
        b = obj.b;
    }
};

class Deep
{
private:
    int n, m;
    int *k;

public:
    Deep()
    {
        k = new int;
        cout << "object created and deep copy starts" << endl;
    }
    void setData(int i, int j, int l)
    {
        n = i;
        m = j;
        *k = l;
    }
    void getData()
    {
        cout << "deep copied values are:" << endl
             << n << endl
             << m << endl
             << *k << endl;
    }
    Deep(Deep &temp)
    {
        n = temp.n;
        m = temp.m;
        k = new int;
        *k = *(temp.k);
    }
};

int main()
{
    shallow obj1;
    obj1.setVal(100, 99);
    // shallow obj2 = obj1; //cpy constructor method shallow cpy
    shallow obj2 = obj1;
    obj2.getVal();

    Deep d1;
    d1.setData(3, 4, 5);
    Deep d2 = d1;
    d2.getData();
    return 0;
}