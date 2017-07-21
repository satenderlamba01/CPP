// Demonstrating global friend function.
//Print() is a global friend function of class a.

#include <iostream>

using namespace std;

class a;//a declared but not defined.
void print(a obj);//print() declared but not defined.

class a
{
    int x;
protected:
    int y;
public:
int z;
    friend void print(a obj);
    a()
    {
        x=0;
        y=0;
        z=0;
    }
};

//print() is a global friend function.
//So, it can access public, private and protected data of class a;
void print(a obj)
{
    cout<<"X of class a is "<<obj.x<<endl;
    cout<<"Y of class a is "<<obj.x<<endl;
    cout<<"Z of class a is "<<obj.x<<endl;
}

int main()
{
    a obj;
    print(obj);
    return 0;
}