#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real ,imaginary;

public:
    void set_Data(int a,int b){
        real=a;
        imaginary=b;
    }

    void get_Data(){
        cout<<"The Real Number is "<<real<<endl;
        cout<<"The Imaginary Number is "<<imaginary<<endl;
    }

};

int main()
{
    Complex c1;
    // c1.set_Data(1,54);  //it is easy method for accessing methods from classes
    // c1.get_Data();
    Complex *ptr = &c1;
    // (*ptr).set_Data(1,54);   // This is accessing data from the pointer we are using bracket and start because of operator precedance 
    // (*ptr).get_Data(); // We can also use this(->) means which is in tha bracket operator for accessing the methods of the classes 
    // Example 
    // ptr->set_Data(1,54);
    // ptr->get_Data();
    return 0;
}