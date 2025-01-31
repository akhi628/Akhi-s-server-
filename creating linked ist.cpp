#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};
int main(){
node *a=NULL, *b=NULL, *c=NULL, *d=NULL;

a=new node();
b=new node();
c=new node();
d=new node();

a->data=10;
b->data=20;
c->data=30;
d->data=40;

a->next=b;
b->next=c;
c->next=d;
d->next=NULL;
node *head =a;

cout<<"Before inserting "<<endl;
while(a!=NULL){
    cout<<a->data<<endl;
    a=a->next;
}
node *p=new node();
p->data=10;
p->next=NULL;
p->next=head;
head=p;

cout<<"Before inserting "<<endl;
while(head!=NULL){
    cout<<head->data<<endl;
    head=head->next;
}
return 0;
}
