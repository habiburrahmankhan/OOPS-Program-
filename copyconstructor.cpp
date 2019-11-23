#include<iostream>
using namespace std ;
void hrkhan()
{
	cout<<"Name :- Habiburrahman"<<endl;
	cout<<"Rollno :-  17BCS071 "<<endl;
	cout<<"B-Tech 5th Semester (Compute Engineering ) "<<endl;
	cout<<endl;
}

class Gamma
{
	int a , b ;
	public : 
    Gamma()
    {

    }
    Gamma(int a , int b)
    {
    	this->a = a ;
    	this -> b = b ;
    	cout<<"Constructor Called "<<endl;
    }
    Gamma(Gamma &g)
    {
    	this->a=g.a ;
    	this->b = g.b ;
    	cout<<"Copy Constructor Called "<<endl;
    }
    void print()
    {
        cout<< a << "    "<<b<<endl ;
    }
    void operator=(Gamma &gamma)
    {
       this->a = gamma.a ;
       this->b = gamma.b;
       cout<<"Overloaded Assignment operator Called"<<endl;
    }
};

int main()
{
	hrkhan();
   Gamma g(1 ,2 );
   cout<<"Value of g are   ";
   g.print();
   Gamma g2 = g ;
   cout<<"Values of g2 are ";
   g2.print();
   
   Gamma g3(g);
   cout<<"Values of g3 are ";
   g3.print();
   Gamma g4 ;
   g4 = g ;
   cout<<"Values of g4 are ";
   g4.print();
	return 0 ;
}







