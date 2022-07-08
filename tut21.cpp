#include<bits/stdc++.h>
using namespace std;

class Employee{

    private:
        int a,b,c;  
    public:
        int d,e;

        void setData(int a1,int b1,int c1); // Declaration
        void getData(){
            cout<<"The Value of a is "<<a<<endl;
            cout<<"The Value of b is "<<b<<endl;
            cout<<"The Value of c is "<<c<<endl;
            cout<<"The Value of d is "<<d<<endl;
            cout<<"The Value of e is "<<e<<endl;
        }
};

void Employee :: setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

class Animal{
    public:
        string gname;
        int leg,count;

        void setData(int count1,int leg1,string gname1 );
        void getData();
};

void Animal :: setData(int count1,int leg1,string gname1 )
{
    count=count1;
    leg=leg1;
    gname=gname1;
}

void Animal :: getData()
{
    cout<<"The Number of Animal is = "<<count<<endl;
    cout<<"The leg Of Animal is = "<<leg<<endl;
    cout<<"Tha Group Name of Animal is = "<<gname<<endl;
}
 

int main()
{
    Animal cow;
    cow.setData(5,4,"Amii");
    cow.getData();

    Employee abhay;
    // abhay.a=134; we can not access out of class a because it is a private variable only class's function can access private variable 
    // abhay.d=55;
    // abhay.e=79;
    // abhay.setData(1,2,3);
    // abhay.getData(); 
    return 0;
}