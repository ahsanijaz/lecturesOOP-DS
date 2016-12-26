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
  linkedlist()
  {
    head=NULL;
  }
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
  };
int main()
{
  linkedlist list1;
  list1.addnode(1);
  list1.addnode(2);
  list1.addnode(3);
  /*  Node *n;
  n=new Node(10,NULL)  ;
  cout<<"Data"<<n->data<<endl;
  n->next=new Node(20,NULL);
  n=n->next;
  cout<<"Data"<<n->data<<endl;*/
  return 0;
}
