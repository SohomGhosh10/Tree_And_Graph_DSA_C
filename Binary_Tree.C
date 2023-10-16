#include<stdio.h>
#include<malloc.h>

struct Node{
    int data;
    struct Node* right;
    struct Node* left;
};

struct Node * CreateNode(int data){
    //Creating a node pointer
    struct Node* n = (struct Node*)malloc(sizeof(struct Node));
    //Setting the left and right child to be NULL
    n->left = NULL;
    n->right = NULL;
    n->data = 2; // Setting the data
    return n;
}

int main(){
    /*
    //Constructing the root node
    struct Node * p;
    p = (struct Node*)malloc(sizeof(struct Node));
    p->left = NULL;
    p->right = NULL;
    p->data = 2;

    //Constructing 2nd and 3rd node
    struct Node * p1;
    p1 = (struct Node*)malloc(sizeof(struct Node));
    p1->left = NULL;
    p1->right = NULL;
    p->data = 1;

    struct Node * p2;
    p2 = (struct Node*)malloc(sizeof(struct Node));
    p2->left = NULL;
    p2->right = NULL;
    p->data = 4;
    */

   //Calling the function

    struct Node * p = CreateNode(2);
    struct Node * p1 = CreateNode(3);
    struct Node * p2 = CreateNode(4);

    //Linking the root node with left and right childrens
    p->left = p1;
    p->right = p2;
    
    return 0;
}