//Inheritance of a class from a structure.
/*
        struct a
            |
            |
            |
            V
         class b
         */
#include <iostream>

using namespace std;

struct a
{
    int x;

    a()
    {
        x=1;
    }
};

//By default inheritance mode of a structure is public.
class b : a
{
    int y;
public:
    b()
    {
        x=5;
        y=6;
    }

    void print()
    {
        cout<<x<<" "<<y<<endl;
    }
};

int main()
{
    b obj;
    obj.print();
    return 0;
}
