//Size of class derived from empty class.
//Size of derived class is equal to sizeof its data members if present else it is also 1.
#include <iostream>

using namespace std;

class a
{
    
};

class b : public a
{
    int x;
};

class c : public a
{
    
};

int main()
{
    cout<<"Sizeof a is "<<sizeof(a)<<endl;
    cout<<"Sizeof b is "<<sizeof(b)<<endl;
    cout<<"Sizeof c is "<<sizeof(c)<<endl;
    return 0;
}