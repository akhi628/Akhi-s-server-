#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};
int main(){
node *a=NULL, *b=NULL, *c=NULL;

a=new node();
b=new node();
c=new node();

a->data=10;
b->data=20;
c->data=30;

a->next=b;
b->next=c;
c->next=NULL;
node *head =a;
node *Akhi=head;

cout<<"Before inserting "<<endl;

while(Akhi!=NULL){
    cout<<Akhi->data<<endl;
    Akhi=Akhi->next;
}
while(a!=NULL){
    cout<<a->data<<endl;
    a=a->next;
}
node *temp=head;
while(temp!=NULL){
        cout<<temp->data<<endl;
    temp=temp->next;
}
node *p=new node();
p->data=10;
temp->next=p;
p->next =NULL;

cout<<"After inserting "<<endl;
while(head!=NULL){
    cout<<head->data<<endl;
    head=head->next;
}
return 0;
}
