/*
    Tree looks:
        4
      /   \
     1     6
    /  \     \
   5     2

*/

#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* right; //Assigning right pointer
    struct Node* left; //Assigning left pointer
};

//Node Creation
struct Node* createNode(int data){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = data;
    p->left = NULL; //Consider left pointer to NULL
    p->right = NULL; //Consider right pointer to NULL
}

//Preorder traversal
void preOrder(struct Node* root){
    if (root != NULL)
    {
        printf("PreOrder Traversal is underway\n");
        printf("Data is %d\n",root->data);
        //Preorder traversal at both left and right nodes
        preOrder(root->left);
        preOrder(root->right);
    }
    
}

int main(){
    //Creating nodes

    struct Node* p = createNode(4);
    struct Node* p1 = createNode(1);
    struct Node* p2 = createNode(6);
    struct Node* p3 = createNode(2);
    struct Node* p4 = createNode(5);

    //linking nodes
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    //Printing the tree
    printf("PreOrder Traversal for the above tree is\n");
    preOrder(p);
    return 0;
}
