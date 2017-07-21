//Constructor overloading.
//Default constructor called when during object definition parameters are not specified.

#include <iostream>

using namespace std;

class a
{
    int x;
public:
//Default Constructor.
    a()
    {
        x=0;
        cout<<"Default Constructor called"<<endl;
    }

//parametrized Constructor.
    a(int x)
    {
        this->x=x;
        cout<<"Parametrized Constructor called"<<endl;
    }
};

int main()
{
    a obj(5);
    a obj1;
    return 0;
}
