#include<iostream>
#include<cstring>
using namespace std;
void hrkhan()
{
	cout<<"Name :- Habiburrahman"<<endl;
	cout<<"Rollno :-  17BCS071 "<<endl;
	cout<<"B-Tech 5th Semester (Compute Engineering ) "<<endl;
	cout<<endl;
}
class String
{
    char *p;
    int len ;
public:
	String()
	{
		
	}

    String(char *s)
    {
    //  int len =strlen(s);
      int len = length(s);
	  p = new char[len + 1];
	   int i=0;
	   while(*(s+i)!='\0')
	   {
	      	*(p+i)=*(s+i);
	      	i++;
	   } 
	   *(p+i)='\0';	
      //strcpy(this->p ,s);
    }
    	int leng()
	{
	    return length(this->p);
	}
    void showdata()
    {

        cout<<p<<endl;
    }
     int length(char *s)
    {
    	int i=0;
    	while(*(s+i)!='\0')
	   {
	      
	      	i++;
	   } 
	  return i;
	}
	void operator==(String &a)
	{
		int len = length(a.p);
	  this->p = new char[len + 1];
	   int i=0;
	   while(*(a.p+i)!='\0')
	   {
	      	*(p+i)=*(a.p+i);
	      	i++;
	   } 
	   *(p+i)='\0';	
	}
	 friend ostream & operator<< (ostream &dout,String &a)
	 {
	 	dout<<a.p;
	 	return dout;
	 }
	
		int operator<=(String &a)
	{
		int len1 =a.len;
		int len2 =this->len; 
	   int i=0 , j=0;
	   while(i<len1 && j<len2)
	   {
	      if(*(a.p+i)!=*(this->p +j))
	      {
	      	return 0;
		  }
	      	i++;
	      	j++;
	   } 
	  if(i==j)
	  {
	  	return 1;
	  }
	  else
	  {
	  	return 0;
	  }
      
	}
	
	
	String operator+(String &a)
	{
		String temp ;
		temp.len = length(this->p) + length(a.p);
		 temp.p = new char[temp.len + 1];
		 int i=0;
		 while(*(this->p+i)!='\0')
	   {
	      	*(temp.p+i)=*(this->p+i);
	      	i++;
	   } 
	   int j=0;
	    while(*(a.p+j)!='\0')
	   {
	      	*(temp.p+i)=*(a.p+j);
	      	j++;
	      	i++;
	   } 
	   *(p+i)='\0';	
	  return temp;	
	}

};
int main()
{
	hrkhan();
	char arr[] = "hello" ;
String str1(arr);
cout<<"The  String 1   : ";
str1.showdata();
cout<<"The length of a String 1   :  "<<str1.leng()<<endl;
char arr1[] = "world";
String str2(arr1);
cout<<"The  String 2   : ";
str2.showdata();
cout<<"The length of a String 2   :  "<<str2.leng()<<endl;
String str3;
str3 = str1 + str2 ;
cout<<"The String 3   : ";
str3.showdata();
cout<<"The length of a String after addition with + overload operator   "<<str3.leng()<<endl;
String str4;
str4 == str3;
cout<<"The  String 4   : ";
str4.showdata();
cout<<"The length of a String after  == overload operator operation perform   "<<str4.leng()<<endl;
int m = str4 <= str1;
cout<<"Is String 4 is <= String 3    (1 for true 0 for false ):   "<<m<<endl;
cout<<"  operator Overload << operation to print String 1   :  " ;
cout<<str1<<endl;
    return 0;
}
