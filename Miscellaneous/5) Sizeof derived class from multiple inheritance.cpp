//Size of class derived from empty class.
//Size of derived class is equal to sizeof its data members if present else it is also 1.
//Therefore, sizeof derived class is sum of sizeof all parent classes + sizeof child class.
//If the sum of all sizes is 0 then sizof automatically assigned 1 else it is equal to the calculated size.
#include <iostream>

using namespace std;

class a
{
    
};

class b
{
    int x;
};

class c
{
    
};

class d
{
    float y;
};

class e : public a, public b, public c, public d
{
    
};

int main()
{
    cout<<"Sizeof a is "<<sizeof(a)<<endl;
    cout<<"Sizeof b is "<<sizeof(b)<<endl;
    cout<<"Sizeof c is "<<sizeof(c)<<endl;
    cout<<"Sizeof d is "<<sizeof(d)<<endl;
    cout<<"Sizeof e is "<<sizeof(e)<<endl;
    return 0;
}