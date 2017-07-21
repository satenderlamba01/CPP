//Default Constructor.

#include <iostream>

using namespace std;

class a
{
    int x;
public:
    //default Constructor.
    a()
    {
        x=0;
        cout<<"Constructor called"<<endl;
    }
};

int main()
{
    a obj;
    return 0;
}
