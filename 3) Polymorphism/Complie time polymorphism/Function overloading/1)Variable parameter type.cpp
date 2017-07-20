// Compile time polymprphism
// Function overloading

#include <iostream>

using namespace std;

class a
{
public:
    int x;
    float y;
    a()
    {
        x=0;
        u=0.0f;
    }
    //Overloaded when input is integer.
    void set(int x)
    {
        this->x=x;
    }
    //Overloaded when input is float.
    void set(float y)
    {
        this->y=y;
    }
    
    int putx()
    {
        return x;
    }
    
    int puty()
    {
        return y;
    }
};

int main()
{
    a obj;
    int x;
    float y;
    cout<<"Value of x is ""<<obj.x<<endl;
    cout<<"Value of y is ""<<obj.y<<endl;
    cout<<"Enter value of x ";
    cin>>x;
    cout<<endl;
    obj.set(x);
    cout<<"Value of x is ""<<obj.set(x)<<endl;
    cout<<"Enter value of y ";
    cin>>y;
    cout<<endl;
    obj.set(y);
    cout<<"Value of y is ""<<obj.set(y)<<endl;
    retun 0;
}