#include<iostream>
#include<cmath>
using namespace std;


class simplecalculator
{
	protected:
		int a,b;

	public:

		 void input()
		 {

		 	cout<<"Enter your first number "<<endl;
		 	cin>>a;
		 	cout<<"Enter your second number "<<endl;
			cin>>b;
        }


		 void output()
		 {
            cout<<"Multipication is "<<a*b<<endl;
		 	cout<<"Division  is "<<a/b<<endl;
		 	cout<<"Subtraction is "<<a-b<<endl;
		 	cout<<"Addition is "<<a+b<<endl;
		 }
};

class scientificcalculator:public simplecalculator
{
	public:
		void soperations()
		{
			input();
			output();
			cout<<"Square root of a is "<<sqrt(a)<<endl;
			cout<<"Cuberoot of a is "<<cbrt(a)<<endl;
			cout<<"Square root of b is "<<sqrt(b)<<endl;
			cout<<"Cuberoot of b is "<<cbrt(b)<<endl;
			cout<<"a to the power b is "<<pow(a,b)<<endl;

		}
};

class Hybridcalculator:public scientificcalculator
{
	public:
		void display()
		{
			cout<<"The result of both simple and scientific calculator operations are "<<endl;

			soperations();
		}
};

int main()
{
{
	Hybridcalculator h;
	h.display();
return 0;
}
