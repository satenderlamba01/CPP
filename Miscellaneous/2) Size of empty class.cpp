//Size of empty class in c++ is always 1.
//Had there been 0 size of such class. Then 2 objects of same class will have same address which causes ambiguity. 

#include <iostream>

using namespace std;

class a
{
    
};

int main()
{
    cout<<"Sizeof class a is "<<sizeof(a)<<endl;
    return 0;
}