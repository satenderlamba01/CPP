// Run time polymprphism
// Function overriding

#include <iostream>

using namespace std;

class a
{
    int x;
public:
    a()
    {
        x=10;
    }
    
    void print()
    {
        cout<<"Print of class a is called."<<endl;
        cout<<"X is "<<x<<endl;
    }
};

//The inhertitance mode is public. 
//So, the public members of parent class get inherited in public maode
//And the protected members get inherited in protected mode.
//Private members do not get inherited at all.
class b : public a
{
    int y;
public:
    b()
    {
        y=100;
    }
    
    //Whenever print of class b is called. It always overrides print of class a.
    void print()
    {
        cout<<"Print of class b is called."<<endl;
        cout<<"Y is "<<y<<endl;
    }
};

int main()
{
    b obj;
    obj.print();
    return 0;
}