#include<iostream>
#include<string>
#include<vector>
using namespace std ;
#define li long int 
li  con =100000001230 ;
int no_of_account =0;
li total_money_inbank = 0 ;
void hrkhan()
{
	cout<<"Name :- Habiburrahman"<<endl;
	cout<<"Rollno :-  17BCS071 "<<endl;
	cout<<"B-Tech 5th Semester (Compute Engineering ) "<<endl;
	cout<<endl;
}
class account
{
   li acc_no , balance;
   string name ; 
   char type ;
public:
	 li getBalance()
   {
   	return this->balance ;
   }
   char getType()
   {
   	return this->type;
   }
   li getacc_no()
   {
     return this->acc_no ;
   }
   string getname()
   {
   	return this->name ;
   }
   void createAccount(string name , char type)
   {
   	 no_of_account++;
   	 this->name = name ;
   	 this->type = type ;
   	 this->balance = 1500 ;
   	 total_money_inbank+=1500 ;
     this->acc_no = con + no_of_account;
     cout<<"Your Account is Created  "<<endl<<"Account No  is  "<<getacc_no()<<endl;
     cout<<"the initial balance is  "<<getBalance()<<endl;
   }
   void display()
   {
   	cout<<"The Name of the  Account holder is "<<getname()<<endl;
   	cout<<"The   Account no is "<<getacc_no()<<endl;
   	cout<<"the type of account is   "<<getType()<<endl ;
   	cout<<"The available balance is   "<<getBalance()<<endl;
   }
   void withdrawmoney(li money)
   {
   	 if (this->balance > money)
   	 {
   	 	balance-=money;
   	 	total_money_inbank-=money ;
   	 }
   	 else
   	 {
   	 	cout<<"Insufficient Balance "<<endl;
   	 }
   }
   void depositmoney(li money)
   {
   	 this->balance+=money;
   	 total_money_inbank+=money ;
   }
};
vector<account> v ;
void displayacc(li account)
{
	int i =0 ;
   for (i = 0; i <v.size(); i++)
   {
   	 li acc = v[i].getacc_no() ;
   	 if (account==acc)
   	 {
   	 	break ;
   	 }
   }
   if (i==v.size())
   {
   	cout<<"Account no is Not Exist "<<endl;
   }
   else
   {
       v[i].display();
   }
}
 void withdraw(li acc , li money)
 {
    int i =0 ;
   for (i = 0; i <v.size(); i++)
   {
   	 li account = v[i].getacc_no() ;
   	 if (account==acc)
   	 {
   	 	break ;
   	 }
   }
   if (i==v.size())
   {
   	cout<<"Account no is Not Exist "<<endl;
   }
   else
   {
       v[i].withdrawmoney(money);
   }
 }
 void deposit(li acc , li money)
 {
    int i =0 ;
   for (i = 0; i <v.size(); i++)
   {
   	 li account = v[i].getacc_no() ;
   	 if (account==acc)
   	 {
   	 	break ;
   	 }
   }
   if (i==v.size())
   {
   	cout<<"Account no is Not Exist "<<endl;
   }
   else
   {
       v[i].depositmoney(money);
   }
 }
int main()
{
	hrkhan();
	int  c = 0 ;
	cout<<"1. Create Account \n2.Deposit \n 3. withdraw \n 4. display Account detail \n5. All account detail\n5. total no of account in bank  \n 7. Total money in Bank\n8. exit\n";
    while(1)
    {
      
      cin>>c ;
      switch(c)
      {
      	case 1 : 
      	        {
      		   string name ;
      		   char type ;
      		cout<<"Enter the name "<<endl;
      		      cin.ignore(10000,'\n');
	              cin.clear();
	              getline(cin,name);
	        cout<<"Enter the type of Account (Saving S or Current C ) "<<endl;
      		cin>>type ;
          account a ;
      	   a.createAccount(name , type);
      		v.push_back(a);
      		break ;
               	}
      case 2 : 
                {
                    li account ,money;
                    cout<<"Enter the Account "<<endl; 
                    cin>>account ;
                    cout<<"Enter the Money "<<endl;
                    cin>>money;

                    deposit(account , money);
                    break;
                }
      case 3 :
			      {
			           li account ,money;
                    cout<<"Enter the Account "<<endl; 
                    cin>>account ;
                    cout<<"Enter the Money "<<endl;
                    cin>>money;
                    withdraw(account , money);
                    break;	
			      }
	   case 4 : 
				  {
                    li acc;
                    cout<<"Enter the Account "<<endl; 
                    cin>>acc ;
                    displayacc(acc);
                    break;	
				  }
       case 5 : 
              {
              	for (int i = 0; i < v.size(); ++i)
              	{
              		v[i].display();
              	}
              	break ;
              }
        case 6 : 
			        { 
			        	cout<<"total no of Account "<<no_of_account<<endl;
			        	break ;
			        }
	    case 7 : 
	            {
	            	cout<<"Total no of Money   "<<total_money_inbank<<endl ;
	            	break ;
	            }
	     case 8 : 
	     {
	     	exit(0);
	     }
	     default :
	     {
	     	cout<<"Invalid "<<endl;
	     }
      }
    }
	return 0 ;
}