// C++ Program to count the number of nodes in the binary search tree
#include<iostream>
using namespace std;

struct node *createnode(int key);
int countnodes(struct node *root);
static int count = 0;

struct node{
    int info;
    struct node *left, *right;
};
class BST{
    public:
    struct node *createnode(int key){
            struct node *newnode = new node;
            newnode->info = key;
            newnode->left = NULL;
            newnode->right = NULL;
            return(newnode);
        }
        int countnodes(struct node *root){
            if(root != NULL){
                countnodes(root->left);
                count++;
                countnodes(root->right);
            }
            return count;
        }
};

int main()
{
    BST t1;
    struct node *newnode = t1.createnode(25);
    newnode->left = t1.createnode(27);
    newnode->right = t1.createnode(19);
    newnode->left->left = t1.createnode(17);
    newnode->left->right = t1.createnode(91);
    newnode->right->left = t1.createnode(13);
    newnode->right->right = t1.createnode(55);
    cout<<"Number of nodes in tree =  "<<t1.countnodes(newnode);
    cout<<"\n";
    count = 0;
    return 0;
}