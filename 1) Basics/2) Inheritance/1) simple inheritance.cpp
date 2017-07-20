// Single inheritance.

#include <iostream>

using namespace std;

//Class a is parent class and class b is derived class;

class a
{
    int x;
public:
    int y;
    int z;
    a()
    {
        cout<<"Costructor of class a called"<<endl;
        x=0;
        y=100;
        z=100;
    }
};

//The inhertitance mode is public. 
//So, the public members of parent class get inherited in public maode
//And the protected members get inherited in protected mode.
//Private members do not get inherited at all.
class b : public a
{
    int x;
    int y;//This y will get overloaded over y of parent class.
    
public:
    b()
    {
        y=1000;
        cout<<"Constructor of class b called"<<endl;
    }
    
    void print()
    {
        cout<<y<<endl;
        cout<<z<<endl;
    }
};

int main()
{
    b obj;
    obj.print();
    return 0;
}