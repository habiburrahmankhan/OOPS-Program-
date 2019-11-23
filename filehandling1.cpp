#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

void hrkhan()
{
	cout<<"Name :- Habiburrahman"<<endl;
	cout<<"Rollno :-  17BCS071 "<<endl;
	cout<<"B-Tech 5th Semester (Compute Engineering ) "<<endl;
	cout<<endl;
}
void createfile()
{
	cout<<"Enter the name of file "<<endl;
	string name ; 
	cin>>name ;
	ofstream fout ;
	fout.open(name);
	string line ;
	cout<<"Enter -1 to exit "<<endl ;
	while(fout)
	{
		getline(cin , line);
		if(line=="-1")
		{
			break ;
		}
		fout<<line<<endl ;
	}
	cout<<"file is Created Successfully ...."<<endl ;
}
 void readfile()
 {
 	cout<<"Enter the name of file  "<<endl;
 	string name ;
 	cin>>name ;
 	ifstream fin ;
 	fin.open(name);
 	string line ;
 	while(fin)
 	{
 		getline(fin, line );
 		cout<<line<<endl ;
 	}
 	fin.close();
 }
void appendfile()
{
	cout<<"Enter the name of file "<<endl ;
	string name ;
	cin>>name;
	ofstream fout ;
	fout.open(name , ios::beg | ios::app) ;
	string line ;
	cout<<"Enter -1 to exit "<<endl ;
	while(fout)
	{
		getline(cin , line);
		if(line=="-1")
		{
			break ;
		}
		fout<<line<<endl ;
	}
	cout<<"file is Successfully Updated  ...."<<endl ;
}
int main()
{
	hrkhan();
	while(1)
	{
		
		cout << "1. Write to createfile  ( or  overwrite )\n2. Write to file( append )\n3. Read File\n 4. Exit\nEnter choice : ";
		int option;
		cin >> option;
		switch(option)
		{
			case 1:
					createfile();
					break;
			case 2:
					appendfile();
					break;
			case 3:
					readfile();
					break;
			case 4:
					cout << "Exit \n";
					exit(0);
			default:
					cout << "Invalid option please Enter Again \n";
					break;
		}	
	}

	return 0 ;
}