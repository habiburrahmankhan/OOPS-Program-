#include<iostream>
using namespace std ;


void hrkhan()
{
	cout<<"Name :- Habiburrahman"<<endl;
	cout<<"Rollno :-  17BCS071 "<<endl;
	cout<<"B-Tech 5th Semester (Compute Engineering ) "<<endl;
	cout<<endl;
}

template<class T>
class Node
{
	public :
   T data ;
   Node *next ;
   Node(T data)
   {
     this->data= data;
     this->next=NULL ;
   }
   
};
template <class T>
class linkedlist
{
	public :
	Node<T>* head ;
   Node<T> *tail ;
	int size ;
	void createlist()
	{
		this->size=0;
		this->head=NULL;
		this->tail= NULL;
	}
	void insertatbegin(T data);
	void insertatlast(T data);
	void insertatindex(T data , int i );
	T deleteatbegin();
	T deleteatlast();
	T deleteatindex(int i);
	void display();
	int length();
};
template<class T > 
void linkedlist<T> :: insertatbegin(T data)
{
	Node<T> *node = new Node<T>(data);
  if (head==NULL)
  {
  	size++;
      head = node ;
      tail = node ;
      return;
  }
  node->next = head;
  head = node ;
  size++;
}
template<class T>
T linkedlist<T> :: deleteatbegin()
{
  if (head==NULL)
  {
    cout<<"the linked list is empty"<<endl ;
    return 0 ;
  }
  T data = head->data ;
  if (head==tail)
   {
    head=head->next;
    tail=head ;
    size--;
    return data ;
    }
  head = head->next ; 
  size--;
  return data ;
} 

template<class T > 
void linkedlist<T> :: insertatlast(T data)
{
	Node<T> *node = new Node<T>(data);
  if (head==NULL)
  {
  	size++;
      head = node ;
      tail = node ;
      return;
  }
  tail->next = node;
  tail = node ;
  size++;
}
template<class T>
T linkedlist<T> :: deleteatlast()
{
  if (head==NULL)
  {
    cout<<"the linked list is empty"<<endl ;
    return 0 ;
  }
  Node<T> *temp = head ;
  T last = tail->data ;
  while(temp->next!=tail)
  {
    temp=temp->next ;
  }
  tail = temp ;
  temp->next = NULL ; 
   size--;
   return last ;
}
template<class T > 
void linkedlist<T> :: display()
{
	Node<T> *node = head ;
	while(node!=NULL)
	{
		cout<< node->data <<endl;
		node= node->next ;
	}
	cout<<endl;
}
template<class T>
int linkedlist<T> :: length()
{
  return this->size ;
}

template<class T>
void linkedlist<T> :: insertatindex(T data , int i)
{
  
  if (i>this->size || i==0)
  {
    cout<<"th lenth of linked list is less "<<endl;
    return;
  }
  if (i==1)
  {
     insertatbegin(data);
  }else if (i==this->size)
  {
    insertatlast(data);
  }
  else
  {
    Node<T> *node = head ;
    for (int j = 0; j<i-2; j++)
    {
         node=node->next ;
    }
    Node<T> *newNode = new Node<T>(data);
    newNode->next = (node->next);
    node->next = newNode ;
     this->size++;
  }
 
}
template<class T>
T linkedlist<T> :: deleteatindex(int i)
{
  T data=0; 
  if (i>this->size || i==0)
  {
    cout<<"th lenth of linked list is less "<<endl;
  }
  if (i==1)
  {
     return deleteatbegin();
  }else if (i==this->size)
  {
   return deleteatlast();
  }
  else
  {
  	Node<T> *node = head ; 
    for (int j = 0; j<i-2; j++)
    {
         node=node->next ;
    }
    data =node->next->data ;
    node->next=node->next->next; 
     this->size--;
     return data ;
  }
  
}

int main()
{
	hrkhan();
   linkedlist<int> ll ;
   ll.createlist();
   ll.insertatbegin(10);
   ll.insertatlast(20);
   ll.insertatlast(45);
   ll.insertatlast(55);
   ll.insertatlast(65);
   ll.insertatbegin(5);
   ll.insertatlast(25);
   ll.insertatindex(15 ,3);
   ll.display();
    cout<<"the length ofthe list "  << ll.length()<<endl;
   cout<<"the deleted element is from begin " <<ll.deleteatbegin()<<endl;
   cout<<"the deleted element is from end " <<ll.deleteatlast()<<endl;
   cout<<"the deleted element at positon i  " <<ll.deleteatindex(2)<<endl;
   ll.display();
    cout<<"the length ofthe list "  << ll.length()<<endl;
	return 0 ;
}