// Multilevel inheritance.

#include <iostream>

using namespace std;

//Class a  is parent of class b.
//Class b is inturn parent of class c.

class a
{
    int x;
protected:
    int y;
public:
    int z;
    a()
    {
        cout<<"Costructor of class a called"<<endl;
        x=1;
        y=1;
        z=1;
    }
};

//The inhertitance mode is public. 
//So, the public members of parent class get inherited in public maode
//And the protected members get inherited in protected mode.
//Private members do not get inherited at all.

class b : public a
{
    int p;
protected:
    int q;
public:
    int r;
    b()
    {
        cout<<"Constructor of class b called"<<endl;
        p=2;
        q=2;
        r=2;
    }
};

//The inhertitance mode is public. 
//So, the public members of parent class get inherited in public maode
//And the protected members get inherited in protected mode.
//Private members do not get inherited at all.
class c : public b
{
    int s;
protected:
    int t;
public:
    int u;
    
    c()
    {
        s=3;
        t=3;
        u=3;
        cout<<"Constructor of class c called"<<endl;
    }
    
    void print()
    {
        cout<<"Y of class a is "<<y<<endl;
        cout<<"Z of class a is "<<z<<endl;
        cout<<"Q of class b is "<<q<<endl;
        cout<<"R of class b is "<<r<<endl;
        cout<<"S of class c is "<<s<<endl;
        cout<<"T of class c is "<<t<<endl;
        cout<<"U of class c is "<<u<<endl;
    }
};

int main()
{
    c obj;
    obj.print();
    cout<<"Z which is public data member of class a "<<obj.z<<endl;
    cout<<"R which is public data member of class b "<<obj.r<<endl;
    return 0;
}