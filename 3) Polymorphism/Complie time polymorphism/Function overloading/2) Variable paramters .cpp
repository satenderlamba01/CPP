// Compile time polymprphism
// Function overloading

#include <iostream>

using namespace std;
//Gets overloaded when 2 parameters are provided.
int min(int a, int b)
{
    return a<b?a:b;
}
//Gets overloaded when 3 parameters are provided.
int min(int a, int b, int c)
{
    if(a<b && a<c)
        return a;
    else if(b<a && b<c)
        return b;
    return c;
}

int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter number 1 ";
    cin>>a;
    cout<<endl;
    cout<<"Enter number 2 ";
    cin>>b;
    cout<<endl;
    cout<<"Enter number 3 ";
    cin>>c;
    cout<<endl;
    cout<<"Minimum of number 1 and number 2 is "<<min(a, b)<<endl;
    cout<<"Minimum of number 1 and number 2 and number 3 is "<<min(a, b, c)<<endl;
    
    return 0;
}