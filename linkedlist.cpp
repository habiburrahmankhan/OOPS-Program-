#include<iostream>
using namespace std ;
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
  int last = tail->data ;
  while(temp->next!=NULL)
  {
    temp=temp->next ;
  }
  tail = temp ;
  temp->next = NULL ; 
   size--;
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
  i=i-1;
  if (i==0)
  {
     insertatbegin(data);
  }else if (i==this->size-1)
  {
    insertatlast(data);
  }
  else
  {
    Node<T> *node = head ;
    for (int j = 0; j <i ; j++)
    {
         node=node->next ;
    }
    Node<T> *newNode = new Node<T>(data);
    newNode->next = (node->next)->next;
    node->next = newNode ;
     this->size++;
  }
 
}

int main()
{
   linkedlist<int> ll ;
   ll.createlist();
   ll.insertatbegin(10);
   ll.insertatlast(20);
   ll.insertatbegin(5);
   ll.insertatlast(25);
   ll.insertatindex(15 ,3);
   ll.display();
   cout<<"the deleted element is from begin " <<ll.deleteatbegin();
   cout<<"the deleted element is from end " <<ll.deleteatlast();
   ll.display();
    cout<<"the length ofthe list "  << ll.length()<<endl;
	return 0 ;
}