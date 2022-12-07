#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;
node(int d){
    this->data=d;
    this->data=NULL;
    this->data=NULL;
}

};

node *buildtree(node *root){
    cout<<"data"<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }
    root->left=buildtree(root->left);
    root->right=buildtree(root->right);
    return root;
}

void levelordertraversal(node *root){
    queue<
}

int main(){

    node *root=NULL;
    root= buildtree(root);
    


}