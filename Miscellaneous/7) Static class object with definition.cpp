//Class having static object of another class.
//Static object must be defined explicitly outside the class before using it.
//This program works fine.
//This is applicable even if the object is of the class itself. Like static object of class b in class b itself.
#include <iostream>

using namespace std;

class a
{

public:
    int x;

    a()
    {
        cout<<"A's constructor called"<<endl;
    }
};

class b
{
    int y;
    static a obj;//This is only decleration not defintion.

public:
    b()
    {
        cout<<"B's constructor called"<<endl;
        obj.x=5;
    }
};

a b :: obj;//This is definition.

int main()
{
    b z;
    return 0;
}
