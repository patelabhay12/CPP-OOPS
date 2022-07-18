#include <bits/stdc++.h>
using namespace std;

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number()
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void get_marks(void)
    {
        cout << "Your result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void get_score(void)
    {
        cout << "Your PT Score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total =maths+physics+score;
        print_number();
        get_marks();
        get_score();
        cout<<"Your total score is: "<<total<<endl;
    }

};

int main()
{
    Result s1;
    s1.set_number(2001);
    s1.set_marks(99.0,99.0);
    s1.set_score(99.0);
    s1.display();
}