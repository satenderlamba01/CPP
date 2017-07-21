//Constructor overloading by single function definition.
//We can even overload other functions in this manner(Other than constructors also).
#include <iostream>

using namespace std;

class a
{
    int x;
    int y;
public:
//If no values are provided then values of paramters intialized inside the paramters is taken.
//The order of value initialization when function is called is from left to right.
//For eg:- a(5) will assign 5 to first parameter x and second paramter will be initialized by default value inside funtion parameters.
//This cannot be used when left paramters are not initialized during function call. i.e. a(, 5) is invalid.
    a(int x=0, int y=0)
    {
        this->x=x;
        this->y=y;
        cout<<"Default Constructor called"<<endl;
    }

    void print()
    {
        cout<<"X is "<<x<<endl;
        cout<<"Y is "<<y<<endl;
    }
};

int main()
{
    a obj1;
    obj1.print();
    a obj2(1, 2);
    obj2.print();
    a obj3(1);
    obj3.print();
    return 0;
}
