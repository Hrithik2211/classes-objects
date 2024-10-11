#include <iostream>
using namespace std;
class Hero
{
private:
    string name;

public:
    int score;
    // static keyword
    static bool flag;
    // static function
    static bool abcd()
    {
        flag = false;
        return flag;
    }

    // default constructor no r/t, no i/p, name same as class name
    Hero()
    {
        cout << "Constructor called" << endl;
    }

    // parameterized constructor
    Hero(int s)
    {
        /* this keyword stores the address of current
        object of class Hero in which score is a
        memory block where you can place a value */
        this->score = s;
        cout << "value of this is" << this << endl;
    }

    // setter fn to set name
    void setName(string n)
    {
        name = n;
    }
    // gets the name after setting
    string getName()
    {
        return name;
    }

    // copy constructor
    Hero(Hero &temp)
    {
        cout << "copy constructor called" << endl;
        this->score = temp.score;
    }
    ~Hero()
    {
        cout << "destructor is called" << endl;
    }
};
bool Hero::flag = true;
int main()
{
    Hero ramesh(7);
    // setting value of public member of class
    // ramesh.score = 1000;
    cout << "the score of ramesh is " << ramesh.score << endl;
    cout << "value of object ramesh is " << &ramesh << endl;

    // getting value of that public member
    cout << ramesh.score << endl;

    // setting values to pvt member function of class
    ramesh.setName("Hrithik");
    // getting the values of that pvt member
    cout << ramesh.getName() << endl;

    // dynamic allocation
    Hero *suresh = new Hero;
    cout << "the address of object named suresh is " << suresh << endl;
    // default copy constructor
    Hero dinesh(ramesh);
    cout << "the score of dinesh is " << dinesh.score << endl;
    dinesh.setName("Yadav");
    cout << "last name of dinesh is " << dinesh.getName() << endl;
    
    
    // manual call of destructor
    delete suresh;

    cout << "the value of flag data member is " << Hero ::flag << endl;
    cout << "static function called here with value " << Hero ::abcd() << endl;
    return 0;
}