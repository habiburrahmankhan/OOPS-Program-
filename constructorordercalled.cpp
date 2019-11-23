#include<iostream>
using namespace std ;
void hrkhan()
{
	cout<<"Name :- Habiburrahman"<<endl;
	cout<<"Rollno :-  17BCS071 "<<endl;
	cout<<"B-Tech 5th Semester (Compute Engineering ) "<<endl;
	cout<<endl;
}
class hexa 
{
    int h ; 
     public:
     	int geth()
     	{
     		return this->h;
     	}
     	hexa(int h )
     	{
     		cout<<"Hexa Constructor is Called "<<endl; 
     		this->h = h ;
     	}
     	~hexa()
     	{
     		cout<<"Hexa desctructor is Called "<<endl; 
     	}
};
class alpha : virtual public hexa
{
private:
   int a ,b,c;
   public:
   int geta()
   {
   	return this->a ;
   } 
   int getb()
   {
   	return this->b ;
   }
   int getc()
   {
   	return this->c ;
   }
   alpha(int a , int b , int c , int h) : hexa(h) 
   {
   	cout<<"Alpha Constructor is called "<<endl;
   	this->a = a ;
   	this->b = b ;
   	this->c = c ;
   }
   ~alpha()
   {
   	cout<<"Alpha Destructor is Called "<<endl ;
   }
};
class beeta : virtual public hexa 
{
  private:
  	int c , d,e ;
  public:
  	int getcbeeta()
  	{
  		return this->c;
  	}
  	int getd()
  	{
  		return this->d;
  	}
  	 	int gete()
  	{
  		return this->e;
  	}
  	beeta(int c ,int d,int e , int h) : hexa(h) 
  	{
  		cout<<"Beeta constructor is Called"<<endl;
  		this->c = c ;
  		this->d = d ;
  		this->e = e ;
  	}
  	~beeta()
  	{
  		cout<<"Beeta Destructor is Called "<<endl;
  	}
};
class gamma  : virtual public alpha  , virtual public beeta 
{
   int f , g ;
public:
	 	int getf()
  	{
  		return this->f;
  	}
  	 	int getg()
  	{
  		return this->g;
  	}
	gamma(int f , int g , int a , int b , int c , int d , int e , int h ) : alpha(a,b,c , h) , beeta(c , d , e , h) , hexa(h)
	{
		cout<<"Gamma Constructor is Called"<<endl;
		this->f = f ;
		this->g = g ;
	}
	~gamma()
	{
		cout<<"Gamma Constructor is called"<<endl ;
	}
	void print()
	{
		cout<<"In Alpha class "<<endl;
		cout<<"a "<<geta()<<endl;
		cout<<"b "<<getb()<<endl;
		cout<<"c "<<getc()<<endl;
		cout<<"In beeta class "<<endl;
		cout<<"c "<<getcbeeta()<<endl;
		cout<<"d "<<getd()<<endl;
		cout<<"e "<<gete()<<endl;
		cout<<"In gamma class "<<endl;
		cout<<"f "<<getf()<<endl;
		cout<<"g "<<getg()<<endl;
		cout<<"In hexa class "<<endl;
		cout<<"h "<<geth()<<endl;

	}
};


int main()
{ 
	hrkhan();
    gamma g(1,2,3,4,5,6,7,8);
    g.print();  
	return 0 ;
}