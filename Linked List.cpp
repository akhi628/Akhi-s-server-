#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node *next;
};
int main (){
  node *a = NULL;
  node *b = NULL;
  node *c = NULL;

  a = new node();
  b = new node();
  c = new node();

  a->data = 10;
  b->data = 20;
  c->data = 30;

  a->next = b;
  b->next = c;
  c->next = NULL;
   
  while(a!=NULL){
    cout << a->data << endl;
    a = a->next;
  }
  cout << Before << endl;

  node *p;
  p = new node();
  p->data = 5;
  p->next = NULL;
  p->next = head;
  head=p;
  while(head!=NULL){
    cout << head->data << endl;
  }
  }
