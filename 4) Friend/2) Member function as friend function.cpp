// Demonstrating friend member function of a class.
//Print() of class b is a friend function of class a.

#include <iostream>

using namespace std;

class a;//Class a declared but not defined.

class b
{
    int p;
    int q;
public:
    b()
    {
        p=1;
        q=1;
    }

    void print(a obj);
};

class a
{
    int x;
protected:
    int y;
public:
int z;
    friend void b:: print(a obj);
    a()
    {
        x=0;
        y=0;
        z=0;
    }
};

//print() is a friend function.
//So, it can access public, private and protected data of class a;
void b:: print(a obj)
    {
        cout<<"X of class a is "<<obj.x<<endl;
        cout<<"Y of class a is "<<obj.y<<endl;
        cout<<"Z of class a is "<<obj.z<<endl;
        cout<<"P of class a is "<<p<<endl;
        cout<<"Q of class b is "<<q<<endl;
    }

int main()
{
    a obj1;
    b obj2;
    obj2.print(obj1);
    return 0;
}
