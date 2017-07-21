//Size of empty class when memory is allocated at run time is also 1.
//Had there been 0 size of such class. Then 2 objects of same class will have same address which causes ambiguity. 

#include <iostream>

using namespace std;

class a
{
    
};

int main()
{
    a *ptr1;
    a *ptr2;
    ptr1=new a;
    ptr2=new a;
    if(ptr1==ptr2)
        cout<<"Same memory address"<<endl;
    else
        cout<<"Different memory address"<<endl;
    return 0;
}