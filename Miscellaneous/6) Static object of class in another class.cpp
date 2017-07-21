//Class having static object of another class.
//Static object must be defined explicitly outside the class before using it.
//This program will give compilation error.

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
    static a z;//This is only decleration not defintion.
    
public:
    b()
    {
        cout<<"B's constructor called"<<endl;
        z.x=5;//This result in compilation error.Comment this line, program works fine.
    }
};

int main()
{
    b z;
    return 0;
}