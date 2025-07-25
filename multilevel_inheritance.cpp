#include<iostream>
using namespace std;

class Student
{
    protected :
        int roll_number;
    public :
        void set_roll_number(int);
        void get_roll_number(void);
};

void Student :: set_roll_number(int r)
{
    roll_number = r;
}

void Student :: get_roll_number()
{
    cout<<"The roll number is : "<<roll_number<<endl;
}


class Exam : public Student
{
    protected :
        float maths;
        float physics;
    public :
        void set_marks(float,float);
        void get_marks(void);
};

void Exam :: set_marks(float m1,float m2)
{
    maths=m1;
    physics=m2;

}

void Exam :: get_marks()
{
    cout<<"The marks in maths is : "<<maths<<endl;
    cout<<"The marks in physics is : "<<physics<<endl;
}


class Result : public Exam
{
    float per;
    public :
        void display()
        {
            get_roll_number();
            get_marks();

            cout<<"Your percentage is "<<(maths+physics)/2<<endl;
        }
};



int main()
{
        /*
            Notes :-
                If we are inheriting B from A and C from B : [A----->B----->C]
                    1. A is the base class for B and B is the base class for C
                    2. ABC ia called inheritans path
        */



    Result da;
    int roll_number;
    float maths,phy;

    cout<<"Enter the roll number : ";
    cin>>roll_number;

    cout<<"Enter the marks of maths and physics : ";
    cin>>maths>>phy;



    da.set_roll_number(roll_number);
    da.set_marks(maths,phy);
    da.display();

    return 0;
}
