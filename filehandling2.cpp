#include<iostream>
#include<fstream>
#include<cstring>
using namespace std ;
void hrkhan()
{
	cout<<"Name :- Habiburrahman"<<endl;
	cout<<"Rollno :-  17BCS071 "<<endl;
	cout<<"B-Tech 5th Semester (Compute Engineering ) "<<endl;
	cout<<endl;
}

bool checkword(string str)
{
	int flagalpha = 0 , flagnumeric = 0 ;
    for (int i = 0; i < str.size(); ++i)
    {
        if(isalpha(str[i]))
        {
            flagalpha = 1;
        }
        else if(isdigit(str[i]))
        {
        	flagnumeric = 1 ;
        }
        else
        {
        	flagalpha = 0 ;
        	flagnumeric = 0 ; 
        	break ;
        }
    }
    if(flagalpha==1 && flagnumeric ==1)
    {
    	return 1 ;
    }
    else{
    	return 0 ;
    }

    return 1 ;
}
void copyfile()
{
	cout<<"Enter the name of file to copy "<<endl;
	string namesource ;
	cin>>namesource;
	cout<<"Enter the name of to copy the content  "<<endl ;
	string namedestination ;
	cin>>namedestination ;
	ofstream fout ;
	ifstream fin ;
	fin.open(namesource);
	fout.open(namedestination);
	string line ;
	while(fin)
	{
		getline(fin, line);
		fout<<line<<endl ;
	}
	fin.close();
	fout.close();
}
void readSpecific()
{
	cout<<"Enter the name of file "<<endl ;
	string name ; 
	cin>>name ;
	ifstream fin ;
	fin.open(name);
	cout<<" enter the index from where to display "<<endl;
	int start ; 
	cin>>start ;
	fin.seekg(start-1,ios::beg);
	char c ;
	cout<<"Enter the end index  from where to display "<<endl;
	int end ;
	cin>>end ;
	end = end - start ; 
	int i = 0 ; 
	while(i < end && fin)
	{
		fin>>noskipws>>c ;
		cout<<c;
		i++ ;
	}
	cout<<endl ;
}
void readAlphaNum()
{
	cout << "Enter name of file: "<<endl;
    string name;
    cin >> name;
    ifstream fin;
    fin.open(name);
    string word;
    while(fin >> word)
    {
        if(checkword(word))
        {
           cout << word <<endl;
        }
    } 
}

int main()
{
    hrkhan();
     int choice;
    while(1)
    {
        cout << "1. Copy one file to another\n2. Copy only alphanumeric\n3. Read from specific positon\n4. Exit\nEnter  choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                        copyfile();
                        break;
            case 2:
                        readAlphaNum();
                        break;
            case 3:
                        readSpecific();
                        break;
            case 4:
                        cout  << "Exit\n";
                        exit(0);
            default:
                        cout << "Please enter a valid choice\n";
        }
    }


	return 0 ; 
}