#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertIntoBST(Node* root, int d){
    //base case
    if(root==NULL){
        root=new Node(d);
        return root;
    }

    if(d>root->data){
        //right part me insert karna hai
        root->right=insertIntoBST(root->right,d);

    }
    else{
        //left part mein insert karna hai
        root->left=insertIntoBST(root->left,d);
    }
    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        insertIntoBST(root,data);
        cin>>data;
    }
}

int main(){

    Node* root=NULL;
    cout<<"Enter data to create BST:  "<<endl;
    takeInput(root);


}


//may add codes of inorder, preorder, postorder and level order to check further and easy use