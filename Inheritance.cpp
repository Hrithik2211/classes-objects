#include <iostream>
using namespace std;
class Human
{

public:
    int age;
    int height;
    string color;
    bool isAdult;
    void getAge()
    {
        cout << "age is " << this->age << endl;
    }
    void setColor(string c)
    {
        this->color = c;
    }
};

class Male : public Human
{

public:
    void sleep()
    {
        int num;
        cout << "male is sleeping" << endl;
    }
    
};

int main()
{

    Male h1;
    h1.sleep();
    h1.setColor("fair");
    h1.getAge();
    h1.height;
    Human h2;
    return 0;

}