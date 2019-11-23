#include<iostream>
using namespace std ;
void hrkhan()
{
	cout<<"Name :- Habiburrahman"<<endl;
	cout<<"Rollno :-  17BCS071 "<<endl;
	cout<<"B-Tech 5th Semester (Compute Engineering ) "<<endl;
	cout<<endl;
}
class Complex
{
	private :
	int real ;
	int imaginary ;
	public :
	Complex()
	{

	}
	Complex(int real , int imaginary)
	{
		this->real = real;
		this->imaginary = imaginary;
	}
	Complex operator+(Complex &c)
	{
		Complex temp ;
		temp.real =this->real + c.real ;
		temp.imaginary =this->imaginary + c.imaginary ;
		return temp ; 
	}

	Complex operator-(Complex &c)
	{
		Complex temp ;
		temp.real =this->real - c.real ;
		temp.imaginary =this->imaginary - c.imaginary ;
		return temp ; 
	}
	Complex operator*(Complex &c)
	{
		Complex temp ;
		temp.real =this->real * c.real ;
		temp.imaginary =this->real * c.imaginary ;
		return temp ; 
	}
    void operator++()
    {
    	this->real++;
    	this->imaginary++;
    } 
    void operator--()
    {
    	this->real = this->real -1 ;
    	this->imaginary = this->imaginary -1;
    } 
	friend istream & operator>>(istream &din , Complex &c)
	{
		din>>c.real ;
		din>>c.imaginary;
		return din ;
	} 
	friend ostream & operator<<(ostream &dout , Complex &c)
	{
		dout<<c.real<<" ";
		if (c.imaginary > 0 )
		{
			dout<<"+";
		}
		dout<<c.imaginary<<"i "<<endl;
		return dout ;
	} 
};

int main()
{
   Complex c1 , c2; 
   hrkhan();
   cout<<"Enter the real and Complex part "<<endl ;
   cin>>c1;
    cout<<"Enter the real and Complex part "<<endl ;
   cin>>c2;
   Complex c3 ;
   cout<<c1<<endl;
   cout<<c2<<endl;
   c3 = c1 + c2 ;
   cout<<"Addition using binary operator overload      ";
   cout<<c3<<endl;
   c3 = c1 - c2 ;
   cout<<"Subtraction using binary operator overload       ";
   cout<<c3<<endl;
   c3 = c1 * c2 ;
   cout<<"Multiplication  using binary operator overload    ";
   cout<<c3<<endl ;

   ++c1;
   --c2;
    cout<<"Increment using unaray operator overload    ";
   cout<<c1<<endl;
    cout<<"decrement using unaray operator overload    ";
   cout<<c2<<endl;
	return 0 ;
}