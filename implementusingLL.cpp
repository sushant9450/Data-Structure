#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};

class Queue{
    Node *head;
    Node *tail;

    public:
     Queue(){  // constructor created
        head=tail=NULL;
     }


     void push(int data){
        Node *newnode=new Node(data);    // sbse phele node create kiya with our data
        if(head==NULL){
            head=tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }

     }

     void pop(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
        }

        Node *temp=head;
        head=head->next;
        delete temp;
     }


     int front(){
        if(empty()){
            cout<<"Queue is empty"<<endl;
        }
        return head->data;
        return -1;
     }


     bool empty(){
        return head==NULL;

     }
};

int main() {
    Queue Q;
    Q.push(1);
    Q.push(2);
    Q.push(3);
  while (!Q.empty())
  {
    cout<<Q.front()<<endl;
    Q.pop();
  }
    return 0;
}