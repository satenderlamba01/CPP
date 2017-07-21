//Inheritance of a structure from class.
/*
        class a
            |
            |
            |
            V
         struct b
         */
#include <iostream>

using namespace std;

class a
{
    int v;
protected:
    int w;
public:
    int x;
    a()
    {
        cout<<"Constructor of class a called"<<endl;
        v=1;
        w=1;
        x=1;
    }
};

struct b : public a
{
    int y;
public:
    b()
    {
        cout<<"Constructor of struct b called"<<endl;
        y=5;
    }

    void print()
    {
        cout<<"W of class a is "<<w<<endl;
        cout<<"X of class a is "<<x<<endl;
        cout<<"Y of struct b is "<<y<<endl;
    }
};

int main()
{
    b obj;
    obj.print();
    return 0;
}
