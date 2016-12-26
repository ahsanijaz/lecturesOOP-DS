#include<iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  Node(int a, Node* b)
  {
    data=a;
    next=b;
  }
};


class Linkedlist
{
  Node *head;
public:
  Linkedlist()
  {
    head=NULL;}

  void deletenode(int index)
  { Node *n=head;
    Node *nextptr;
    Node *delptr;
    Node *prevptr;
    for (int i = 1; i < index; i++)
      {
	if(i==index-1)
	  prevptr=n;
	n=n->next;
      }
    delptr=n;
    nextptr=delptr->next;
    prevptr->next=nextptr;
    delete delptr;
  }
  void addnode(int value)
  {
    Node *n;
    if(head==NULL)
      {
	head=new Node(value,NULL);
      }
    else
      {
	n=head;
	while(n->next!=NULL)
	  n=n->next;
	n->next=new Node(value,NULL);
      }

  }
  void printlist()
  {Node *n=head;
    while(n!=NULL)
      {
	cout<<"data is "<<n->data<<endl;
	n=n->next;
      }
  }
};

int main()
{
  Linkedlist list1;
  list1.addnode(1);
  list1.addnode(2);
  list1.addnode(3);
  list1.addnode(4);
  list1.addnode(5);
  list1.addnode(6);
  list1.addnode(7);
  list1.addnode(8);
  list1.printlist();
  list1.deletenode(1);
  list1.printlist();
  /*  Node *n;
  n= new Node(10,NULL);
  cout<<n->data<<endl;
  Node *n2;
  n2=new Node(30,NULL);
  n->next=n2;
  cout<<n2->data<<endl;

  cout<<n->data<<endl;
  n=n->next;
  cout<<n->data<<endl;
  n->next=new Node(60,NULL);
  n=n->next;
  cout<<n->data;
  */
}
