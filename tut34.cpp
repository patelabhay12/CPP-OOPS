#include<bits/stdc++.h>
using namespace std;


class Number{
    int a;

    public:
    Number()
    {
        a=0;
    }
    Number(int num)
    {
        a=num;
    }
    // when no copy constructor is found, compiler will pass a default copy constructor
    Number(Number &obj) // Copy Constructor
    {
        cout<<"Copy Constructor called"<<endl;
        a=obj.a;
    }
    void display()
    {
        cout<<"The number for this object is "<<a<<endl;
    }
};

int main()
{
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();
    Number z1(x);
    z1.display();
    


    return 0;
}