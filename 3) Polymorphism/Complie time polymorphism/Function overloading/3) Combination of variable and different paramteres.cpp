// Compile time polymprphism
// Function overloading

#include <iostream>

using namespace std;
//Gets overloaded when 2 integer parameters are provided.
int min(int a, int b)
{
    return a<b?a:b;
}
//Gets overloaded when 3 integer parameters are provided.
int min(int a, int b, int c)
{
    if(a<b && a<c)
        return a;
    else if(b<a && b<c)
        return b;
    return c;
}
//Gets overloaded when 2 float parameters are provided.
float min(float a, float b)
{
    return a<b?a:b;
}
//Gets overloaded when 3 float parameters are provided.
float min(float a, float b, float c)
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
    float d;
    float e;
    float f;
    cout<<"Enter number 1(integer type) ";
    cin>>a;
    cout<<endl;
    cout<<"Enter number 2(integer type) ";
    cin>>b;
    cout<<endl;
    cout<<"Enter number 3(integer type) ";
    cin>>c;
    cout<<endl;
    cout<<"Minimum of number 1 and number 2 is "<<min(a, b)<<endl;
    cout<<"Minimum of number 1 and number 2 and number 3 is "<<min(a, b, c)<<endl;
    cout<<"Enter number 4(float type) ";
    cin>>d;
    cout<<endl;
    cout<<"Enter number 5(float type) ";
    cin>>e;
    cout<<endl;
    cout<<"Enter number 6(float type) ";
    cin>>f;
    cout<<endl;
    cout<<"Minimum of number 4 and number 5 is "<<min(d, e)<<endl;
    cout<<"Minimum of number 4 and number 5 and number 6 is "<<min(d, e, f)<<endl;
    return 0;
}