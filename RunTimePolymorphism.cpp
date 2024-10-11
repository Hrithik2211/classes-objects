// Method overriding
#include <iostream>
using namespace std;
class Animal
{
public:
    void speak()
    {
        cout << "SPEAKING" << endl;
    }
};
class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Barking" << endl;
    }
};
class Wolf : public Animal
{
public:
    void speak()
    {
        cout << "HOWLING" << endl;
    }
};
int main()
{
    Dog d;
    Wolf w;
    d.speak();
    w.speak();
    return 0;
}