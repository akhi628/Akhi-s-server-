#include <iostream>
using namespace std;
struct node{
 int data ;
 node*next;
};

int main(){
node*a=NULL,*b=NULL, *c=NULL, *d=NULL;

a=new node();
b=new node();
c=new node();
d=new node();

cout<<"Enter the value for four new node:";
cin >> a->data >> b->data >> c->data >> d->data;

a->next=b;
b->next=c;
c->next=d;
d->next=a;

node*head=a;
node*p=new node();
cout<<"Enter data for the new node to insert at the beginning:";
cin>> p->data;
node*temp=head;
while(temp->next!=head){

   temp=temp->next;
}
temp->next=p;
p->next=head;
head=p;
cout<<"Circular Singly Linked List after insertion at the beginning: ";
temp=head;
if(head!=NULL){
  do{
    cout<<temp->data<<" ";
    temp=temp->next;
  }while(temp!=head);
  cout<<endl;

}

return 0;
}
