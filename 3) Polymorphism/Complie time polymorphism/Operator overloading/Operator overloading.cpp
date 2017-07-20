// Compile time polymprphism
// Operator overloading
//Here '+' and '-' operators are being overloaded.

#include <iostream>

using namespace std;

class Complex
{
    float real;
    float imaginory;
public:     
    Complex()
    {
        real=0;
        imaginory=0.0f;
    }
   
    void set(float real, float imaginory)
    {
        this->real=real;
        this->imaginory=imaginory;
    }
    
    float getreal()
    {
        return real;
    }
    
    float getimaginory()
    {
        return imaginory;
    }
    //Handle '+' operator overloading.
    Complex operator + (Complex b)
    {
        Complex c;
        c.real=this->real+b.getreal();
        c.imaginory=this->imaginory+b.getimaginory();
        return c;
    }
    //Handle '-' operator overloading.
    Complex operator - (Complex b)
    {
        Complex c;
        c.real=this->real-b.getreal();
        c.imaginory=this->imaginory-b.getimaginory();
        return c;
    }
};

int main()
{
    Complex a;
    Complex b;
    Complex c;
    float x;
    float y;
    cout<<"Enter real part of number 1 ";
    cin>>x;
    cout<<endl;
    cout<<"Enter imaginory part of number 1 ";
    cin>>y;
    cout<<endl;
    a.set(x, y);
    cout<<"Enter real part of number 2 ";
    cin>>x;
    cout<<endl;
    cout<<"Enter imaginory part of number 2 ";
    cin>>y;
    cout<<endl;
    b.set(x, y);
    //'+' operator will be overloaded.
    c=a+b;
    cout<<"Sum is "<<c.getreal()<<"+"<<c.getimaginory()<<endl;
    c=a-b;
    //'-' operator will be overloaded.
    cout<<"Difference is "<<c.getreal()<<"+"<<c.getimaginory()<<endl;
    return 0;
}