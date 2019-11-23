#include<iostream>
#include<math.h>
using namespace std ;

void hrkhan()
{
	cout<<"Name :- Habiburrahman"<<endl;
	cout<<"Rollno :-  17BCS071 "<<endl;
	cout<<"B-Tech 5th Semester (Compute Engineering ) "<<endl;
	cout<<endl;
}

int main()
{
	hrkhan();
   float a , b,c ;
   cout<<"Enter the value of a  , b , c "<<endl ;
   cin>>a>>b>>c;
   float d=(b*b - (4*a*c));
   if (d==0)
   {
   	  float r = -(b/(2*a)) ;
   	  cout<<"Roots are Real and Equal "<< r <<" "<<r<<endl ;
   }
   else if(d>0)
   {
    float r1 = ((-b/(2*a)) - (sqrt(d)/(2*a))) ;
    float r2 = ((-b/(2*a)) + (sqrt(d)/(2*a))) ;
    cout<<"roots are real and Unequal  "<<r1 <<"    " <<r2<<endl; 
   }
   else
   {
   	    float r1 = ((-b/(2*a))) ;
        float r2 = ((sqrt(-d)/(2*a))) ;
        cout<<"Roots are Imaginary   \n"<< r1 <<" + "<<r2<<" i "<<endl ;
        cout<< r1 <<" - "<<r2<<" i "<<endl; 
   }

	return 0;
}

