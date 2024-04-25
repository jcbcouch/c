#include<stdio.h>
#include<stdlib.h>

typedef struct node{ 
    char data; 
    struct node* next; 
} node;


void push(char data, node** root){
    node* newnode = (node*)malloc(sizeof(node)); 
    newnode -> data = data; 
    newnode -> next = *root;  
    (*root) = newnode;  
}

void pop(node** stack){
    if(*stack != NULL){
        printf("Element popped: %c\n",(*stack) -> data);
        node* tempPtr = *stack;
        *stack = (*stack) -> next;
        free(tempPtr);
    }
    else{
        printf("The stack is empty.\n");
    }
}


void top(node* stack){
    if(stack != NULL){
    printf("Element on top: %c\n", stack -> data);
    }
    else{
        printf("The stack is empty.\n");
    }
}
int main() {
    node* root = (node*)malloc(sizeof(node));
    root -> data = 'a';
    root -> next = NULL;
    top(root);
    push('b',&root);
    top(root);
    push('c',&root);
    top(root);
    pop(&root);
    top(root);
    // pop(&root);
    // top(root);
    // pop(&root);
    // top(root);
    // pop(&root);
    return 0;
}