#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
   Node(int val){
    data = val;
    next = NULL;

}
};

int getLength(Node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}

Node* findIntesection(Node* head1,Node* head2){
    int len1=getLength(head1);
    int len2=getLength(head2);

    int diff=abs(len1-len2);

        Node*longest;
        Node*shortest;
    if(len1>len2){
        longest=head1;
        shortest=head2;
    }else{
        longest=head2;
        shortest=head1;
    }

    while(diff--){
        longest=longest->next;
    }

    while(longest!=NULL&& shortest!=NULL){

        if(longest==shortest){
            return longest;
        }
        longest=longest->next;
        shortest=shortest->next;
    }
    return NULL;
}

int main() {

    Node* common=new Node(6);
    common->next=new Node(7);

    //ll 1
    Node* head1=new Node(1);
    head1->next= new Node(2);
    head1->next->next= new Node(3);
    head1->next->next->next=(common);

    //ll2
  Node* head2 = new Node(4);
    head2->next = new Node(5);
    head2->next->next = common;

    Node* ans=findIntesection(head1,head2);

    if (ans != NULL) {
        cout << "Intersection Node: " << ans->data << endl;
    }
    else {
        cout << "No Intersection" << endl;
    }

    return 0;
}
    