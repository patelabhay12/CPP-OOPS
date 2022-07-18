#include <bits/stdc++.h>
using namespace std;

class Student
{

protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}

void Student::get_roll_number()
{
    cout << "The Roll number is " << roll_number << endl;
}

class Exam : public Student{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};


void Exam::set_marks(float m,float p)
{
    maths=m;
    physics=p;
}
void Exam::get_marks()
{
    cout<<"The marks in Math is "<<maths<<endl;
    cout<<"The marks in physics is "<<physics<<endl;
}

class Result:public Exam{
    protected:
    float percentaage;
    public:
    void  display_result(){
        get_roll_number();
        get_marks();
        cout<<"Your Percetage is "<<(maths+physics)/2<<"%"<<endl;
    };
};

int main()
{
    Result abhay;
    abhay.set_roll_number(001);
    abhay.set_marks(94.0,99.0);
    abhay.display_result();
    return 0;
}