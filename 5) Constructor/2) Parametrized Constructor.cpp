//Parametrized Constructor.

#include <iostream>

using namespace std;

class a
{
    int x;
public:
    //parametrized Constructor.
    //Intitializes with user defined values.
    a(int x)
    {
        this->x=x;
        cout<<"Constructor called"<<endl;
    }
};

int main()
{
    a obj(5);
    return 0;
}
