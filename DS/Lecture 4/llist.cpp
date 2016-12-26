#include<iostream>
using namespace std;
class Node
{
public:
  int data;
  Node *next;
  Node(int a, Node *b)
  {
    data=a;
    next=b;
  }
};
class linkedlist
{
private:
  Node *head;
public:
 void addnode(int val)
  {
Node *n;
    n=head;
    if(head==NULL)
      {
	head=new Node(val,NULL);
      }
    else{
    while(n->next!=NULL)
      n=n->next;
    n->next=new Node(val,NULL);
    }
  }
  void deletenode(int index)
  {
    Node *n;
    Node *delnode;
    Node *prevnode;
    Node *nextnode;
    n=head;
for (int i = 1; i < index; i++)
  {
    if(i==index-1)
      {prevnode=n;}
    n=n->next;
  }
 delnode=n;
 nextnode=n->next;
 prevnode->next=nextnode;
 delete delnode;
  }
  void printnode()
  {Node *n;
    n=head;
    while(n!=NULL)
      {
     cout<<"Data = "<<n->data<<endl;
     n=n->next;	
      }

  }
  linkedlist()
  {
    head=NULL;
  }
};
int main()
{
  linkedlist list1;

  list1.addnode(1);
  list1.addnode(2);
  list1.addnode(3);
  list1.addnode(4);
  list1.addnode(5);
  list1.addnode(6);
  list1.addnode(7);
  list1.printnode();
  cout<<endl<<endl;
  list1.deletenode(4);
  list1.printnode();
  /*  Node *n;
  n=new Node(10,NULL)  ;
  cout<<"Data"<<n->data<<endl;
  n->next=new Node(20,NULL);
  n=n->next;
  cout<<"Data"<<n->data<<endl;*/
  return 0;

}
