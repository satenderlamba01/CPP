//Basic create a class of name book and object of it by the name of pages.
#include <iostream>

using namespace std;

//Class has 2 private data members and 2 public data members.
class book
{
//By default private.
    int a;
    int b;
public:
    int c;
    int d;

    //Constructor
    book()
    {
        cout<<"Constructor called"<<endl;
        a=0;
        b=0;
        c=0;
        d=0;
    }
    //Fuctions defined inside class are by default inline
    void setabcd(int a, int b, int c, int d)
    {
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
    }

    int geta()
    {
        return a;
    }

    int getb()
    {
        return b;
    }

    int getc()
    {
        return c;
    }

    int getd()
    {
        return d;
    }

    //Destructor will be called when scope of the class book's object will be ending
    ~book()
    {
        cout<<"Destructor called"<<endl;
    }
};

int main()
{
    //Creates object OBJECT of class CLASS;
    book pages;
    int a;
    int b;
    int c;
    int d;
    cout<<"Enter a to be set ";
    cin>>a;
    cout<<endl;
    cout<<"Enter b to be set ";
    cin>>b;
    cout<<endl;
    cout<<"Enter c to be set ";
    cin>>c;
    cout<<endl;
    cout<<"Enter d to be set ";
    cin>>d;
    cout<<endl;
    pages.setabcd(a, b, c, d);
    cout<<"a's value is "<<pages.geta()<<endl;
    cout<<"b's value is "<<pages.getb()<<endl;
    cout<<"c's value is "<<pages.getc()<<endl;
    cout<<"d's value is "<<pages.getd()<<endl;
    //As a and b are private. So, we cannot access them without member function.
    //Uncommenting any of the below 2 lines will result in compliation error.
    //cout<<"a's value is "<<pages.a<<endl;
   //cout<<"b's value is "<<pages.b<<endl;
    cout<<"c's value is "<<pages.c<<endl;
    cout<<"d's value is "<<pages.d<<endl;
    return 0;
}
