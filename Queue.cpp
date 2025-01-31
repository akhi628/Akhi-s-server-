// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Queue{
    private:
    int queue[100];
    int MAX;
    int front rear;
    public:
    Queue(int Maxsize){
        Max=maxsize;
        front=-1;
        rear=-1;
    }

    void push(int num){
        if(rear==MAX-1){
            cout<<"Queue overflow " << endl;
            return;
        }

        if(front == -1 && rear==-1){
            front=rear=0;
        } else{
            rear ++;
        }
        queue[rear]=num;
    }
    void pop(){
        if( front == -1 || front > rear){
            cout<<"Queue underflow " << endl;
            return ;
        }
        cout<<"pop :"<<queue [front]<<endl;
        front ++;
    }
    void display(){
        if (front == -1 || front > rear){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Queue Elements:";
        for( int i = front; i<= rear; i++){
            cout<<queue[i]<<" ";
        }
        cout<< endl;
    }
}  ;
int main() {
   Queue .q(3);
   q.push(10);
   q.push(20);
   q.push(30);
   q.push(40);
   q.display();
   q.pop();
   q.pop();
   q.pop();

    return 0;
}
