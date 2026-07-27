#include <bits/stdc++.h>
using namespace std;
struct Node {
 int data;
 Node* next;
};
int main() {

    Node* head=NULL;
    int n, key;
    cout<<"Enter the no of nodes: ";
    cin>>n;

    // Create linked list using user input
    for(int i=0;i<n;i++){
        cout<<"Enter data: "<<endl;;
        cin>>key;
    

    Node* newNode=new Node();
    newNode->data=key;

    if(head==NULL){  //if list is empty
        head=newNode;
        newNode->next=head;// circular bana diya (khud ko point karega)
    }else{    //if list is not empty
        Node* temp=head;
        while (temp->next!=head){ //this loop show that it is circular kinked list
            temp=temp->next;//agar upere wali line me !=NULL hota to ye circular mhi hota
        }
            temp->next = newNode;   // last node ka next new node ban gaya
            newNode->next = head;   // new node ka next firse head (circular)
    }

    }
    cout<<"Original Circular linked list: "<<endl;
    Node* temp=head;
    do{
        cout<<temp->data<<" ->";
        temp=temp->next;
    }while(temp!=head);

    //Insertion at the end
    

    return 0;
}