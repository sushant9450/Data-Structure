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

class List{
public:
    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    void printList(Node* head){
        while(head != NULL){
            cout << head->data << " -> ";
            head = head->next;
        }
        cout << "NULL\n";
    }

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){  //4 step
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    //MERFG SHORT IN LL    2 step
    Node* splitAtMid(Node* head){
        Node* slow = head;
        Node* fast = head;
        Node* prev = NULL;

        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        if(prev != NULL){
            prev->next = NULL;
        }

        return slow;
    }

    // adding two ll in single ans ll   3 step
    Node* merge(Node* left, Node* right){
        List ans;

        Node* i = left;
        Node* j = right;

        while(i != NULL && j != NULL){
            if(i->data <= j->data){
                ans.push_back(i->data);
                i = i->next;
            }else{
                ans.push_back(j->data);
                j = j->next;
            }
        }

        while(i != NULL){
            ans.push_back(i->data);
            i = i->next;
        }

        while(j != NULL){
            ans.push_back(j->data);
            j = j->next;
        }

        return ans.head;
    }

    //  1 STEP
    Node* mergeSort(Node* head){
        if(head == NULL || head->next == NULL)
            return head;

        Node* rightHead = splitAtMid(head);

        Node* left = mergeSort(head);
        Node* right = mergeSort(rightHead);

        return merge(left, right);
    }
};

int main(){

    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
   ll.printList(ll.head);          // Pehla output

ll.head = ll.mergeSort(ll.head);

ll.printList(ll.head);          // Doosra output

    return 0;
}