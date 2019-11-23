#include<iostream>
#include<string>
using namespace std ;

void hrkhan()
{
	cout<<"Name :- Habiburrahman"<<endl;
	cout<<"Rollno :-  17BCS071 "<<endl;
	cout<<"B-Tech 5th Semester (Compute Engineering ) "<<endl;
	cout<<endl;
}

class Box
{
	private : 
	int length ; 
	int breath ;
	int height ;
	public :
	inline void setlength(int length)
	{
        this->length = length ;
	} 

	inline void setbreath(int breath)
	{
        this->breath= breath ;
	} 
	inline void setheight(int height)
	{
		this->height = height ;
	}
	inline int getlength()
	{
		return this->length ;
	}

	inline int getbreath()
	{
		return this->breath ;
	}

	inline int getheight()
	{
		return this->height ;
	}
	Box()
	{

	}

	Box(int length , int breath , int height)
	{
		this->length = length ;
		this-> breath = breath ;
		this-> height = height ;
	}
    friend int volume(Box b);
    friend int surfacearea(Box b);
};
  int volume(Box b)
  {
     return b.length*b.breath*b.height;
  }
  int surfacearea(Box b)
  {
  	return 2*(b.length*b.breath + b.breath*b.height + b.height*b.length) ;
  }
int main()
{
    Box box;
    hrkhan();
    int l , b ,h ;
    cout<<"Enter the length breath and height "<<endl ; 
    cin>>l>>b>>h ;
    box.setlength(l);
    box.setheight(h);
    box.setbreath(b);
    cout<<" the length is "<<box.getlength()<<endl;
    cout<<" the breath is "<<box.getbreath()<<endl;
    cout<<" the height is "<<box.getheight()<<endl; 
    cout<<" the volume is "<<volume(box)<<endl;
    cout<<"The surface area is "<<surfacearea(box)<<endl;
    cout<<" Using Constructor "<<endl ;
    Box box2(10,15,25);
    cout<<" the length is "<<box2.getlength()<<endl;
    cout<<" the breath is "<<box2.getbreath()<<endl;
    cout<<" the height is "<<box2.getheight()<<endl; 
    cout<<" the volume is "<<volume(box2)<<endl;
    cout<<"The surface area is "<<surfacearea(box2)<<endl;
	return 0 ;
}




