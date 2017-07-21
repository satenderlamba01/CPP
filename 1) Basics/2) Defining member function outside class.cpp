// Defining member function outside class.

#include <iostream>

using namespace std;

class a
{
    int x;
    int y;
    int z;
public:

    a();//Function declerations.
    void set(int, int , int);//Functions defined outside class are not by default inline. We can make them inline by using inline before function definition.
    int getx();
    int gety();
    int getz();
};

a :: a()
{
    x=0;
    y=0;
    z=0;
}

void a :: set(int x, int y, int z)
{
    this->x=x;
    this->y=y;
    this->z=z;
}

int a :: getx()
{
    return x;
}

int a :: gety()
{
    return y;
}

int a :: getz()
{
    return z;
}

int main()
{
    a obj;
    int x;
    int y;
    int z;
    cout<<"Enter value of x ";
    cin>>x;
    cout<<endl;
    cout<<"Enter value of y ";
    cin>>y;
    cout<<endl;
    cout<<"Enter value of z ";
    cin>>z;
    cout<<endl;
    obj.set(x, y, z);
    cout<<"Value of x is "<<obj.getx()<<endl;
    cout<<"Value of y is "<<obj.gety()<<endl;
    cout<<"Value of z is "<<obj.getz()<<endl;
    return 0;
}
