//A class can have static object of its type.
//This is because static data members are not stored in object rather they reside in data segment.

//Non static objects of self type are not allowed.
//This is because, if non static objects would be allowed then it would become impossibe for compiler to calculate sizeof the data object.

//Non static pointers of self type are allowed.
//It is because pointers have fixed size irrespective of data type they are pointing to.

#include <iostream>

using namespace std;

class a
{
    int x;
    static a obj;//works fine
    a *ptr;//works fine
    //a y;//Gives error

public:
    a()
    {
        cout<<"Constructor of class a called"<<endl;
        x=1;
    }
};

int main()
{
    a obj;
    return 0;
}