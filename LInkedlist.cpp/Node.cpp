#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next; //pointer
};
int main() {
 Node*head =new Node(); 
 Node*first=new Node();
 Node*second=new Node();
 Node*third=new Node();
 //this is only for single node
   //new dynamicaly allocate memory in heap of Node and also returning address(addres ko store krne ke leye head liya)
 // data type node hai kuykiye node ko store kr rha hai    

 //Assigning value
 head ->data=10;
 head ->next=first;

 // Node*hell=new Node();
 first->data=20;
 first ->next=second;

 //Node*third=new Node();
second->data=30;
second->next=third;

third->data=40;
third->next=NULL;//write in capatial as it is predefined

Node *temp=head;
while(temp!=NULL){
  cout<< temp->data<<endl;
  temp=temp->next;
}
 

//  cout<<"data = "<<head ->data<<endl;
//  cout<<"next = "<<head ->next<<endl;

//  cout<<"data = "<<first ->data<<endl;
//  cout<<"next = "<<first ->next<<endl;

//  cout<<"data = "<<second->data<<endl;
//  cout<<"next = "<<second ->next<<endl;

// cout<<"data = "<<third ->data<<endl;
// cout<<"data = "<<third ->next<<endl;

 Node *newnode=new Node();
 newnode->data=50;
 newnode->next=NULL;

 newnode->next=head;
 head=newnode;

 Node*newnode1=new Node();
 newnode1->data=65;
 newnode1->next=NULL;

 Node *temp=head;
 while(temp->next!=NULL){
  temp=temp->next;
  
 }
 
 temp->next=newnode;
    return 0;
}