#include<bits/stdc++.h>
using namespace std;

class Test{
    int a;
    int b;
    public:

    // Test(int i,int j):a(i),b(j)
    // Test(int i,int j):a(i),b(i+j)
    // Test(int i,int j):a(i),b(a+j)
    // Test(int i,int j):a(i),b(2*j)
    // Test(int i,int j):b(j),a(i+b) --> RED Flag this will create problems becouse a will  be initialized first
    Test(int i,int j)
    {
        a=i;
        b=j;
        cout<<"Constructor Executed "<<endl;
        cout<<"The value of a "<<a<<endl;
        cout<<"The value of b "<<b<<endl;
    }
};
int main()
{
    Test m1(4,6);
    return 0; 
}