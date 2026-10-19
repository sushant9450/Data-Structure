#include <bits/stdc++.h>
using namespace std;  

class Node{     //O(n)-->timecomplexity  
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){  //constructor
        this->data=data;
        left=right=NULL;
    }
};

static int idx=-1;  // ek index le leye travel ke leye

Node*builTree(vector<int>nodes){
    idx++;
    if(nodes[idx]==-1){
        return NULL;
    }

    Node* currnode=new Node(nodes[idx]);  //1
    currnode->left=builTree(nodes);   //left-subtree
    currnode->right=builTree(nodes);   //rigth-subtree
    return currnode;

};

/************MAIN Inorder TRVERSAL */
void Inorder(Node* root){  //O(n)-->as we each node 1 time and assume there are n node
    if(root==NULL){
        return;
    }
    //Left
    Inorder(root->left);
    //root
    cout<<root->data<<" ";
    //right
    Inorder(root->right);
}


int main() {
vector<int>nodes={1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root=builTree(nodes);
    //cout<<"root node="<<root->data<<endl;
    Inorder(root);
    cout<<endl;
    return 0;
}