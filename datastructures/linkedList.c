#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int x;
    struct Node* next;
} Node;

void insert_end(Node** root, int value) {
    Node* new_node = malloc(sizeof(Node));
    if (new_node == NULL) {
        exit(1);
    }
    new_node->next = NULL;
    new_node->x = value;

    if (*root == NULL) {
        *root = new_node;
        return;
    }

    Node* curr = *root;
    while(curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new_node;
}

void insert_beginning(Node** root, int value) {
    Node* new_node = malloc(sizeof(Node));
    // if(new_node = NULL) {
    //     exit(3);
    // }
    new_node->x = value;
    new_node->next = *root;

    *root = new_node;
}

void insert_after(Node* node, int value) {
    Node* new_node = malloc(sizeof(Node));
    new_node->x = value;
    new_node->next = node->next;
    node->next = new_node;
}

void insert_sorted(Node** root, int value) {
    if(*root == NULL || (**root).x >= value) {
        insert_beginning(root, value);
        return;
    }
    Node* curr = *root;
    while(curr->next != NULL) {
        if(curr->next->x >= value) {
            break;
        }
        curr = curr->next;
    }
    insert_after(curr, value);
}

void remove_element(Node** root, int value) {
    if(*root == NULL) {
        return;
    }

    if((*root)->x == value) {
        Node* to_remove = *root;
        *root = (*root)->next;
        free(to_remove);
        return;
    }

    for(Node* curr = *root; curr->next != NULL; curr = curr->next) {
        if(curr->next->x = value) {
            Node* to_remove = curr->next;
            curr->next = curr->next->next;
            free(to_remove);
            return;
        }
    }
}

void reverse(Node** root) {
    Node* prev = NULL;
    Node* curr = *root;

    while(curr != NULL) {
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *root = prev;
}

int has_loop(Node* root) {
    Node* slow = root;
    Node* fast = root;

    while(slow != NULL && fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            return 1;
        }
    }
    return 0;
}

void deallocate(Node** root) {
    Node* curr = *root;
    while(curr != NULL) {
        Node* aux = curr;
        curr = curr->next;
        free(aux);
    }
    *root = NULL;
}

void deallocate_recursive(Node** node) {
	if(*node == NULL) return;
	deallocate(&(*node)->next);
	free(*node);
	*node = NULL;
}

void print_list(Node* root) {
    Node* curr = root;
    while(curr != NULL) {
        printf("%d\n", curr->x);
        curr = curr->next;
    }
}

int number_of_nodes(Node* root) {
    Node* curr = root;
    int counter = 0;
    while(curr != NULL) {
        curr = curr->next;
        counter = counter + 1;
    }
    return counter;
}

int number_of_nodes_recursive(Node* node) {
    if(node == NULL) {
        return 0;
    }
    return 1 + number_of_nodes_recursive(node->next);
}

int main() {
    Node* root = NULL;
    root = (Node*) malloc(sizeof(Node));
    if (root == NULL) {
        exit(2);
    }


    root->x = 15;
    root->next = NULL;

    insert_end(&root, 17);
    insert_end(&root, 4);
    insert_end(&root, 10);
    // insert_beginning(&root, 14);
    // insert_after(root->next, 16);
    insert_sorted(&root, 5);
    insert_sorted(&root, 11);
    insert_sorted(&root, 18);
    insert_sorted(&root, 1);

    // Node* curr = root;
    // while(curr != NULL) {
    //     printf("%d\n", curr->x);
    //     curr = curr->next;
    // }

    // for (Node* curr = root; curr != NULL; curr = curr->next) {
    //     printf("%d\n", curr->x);
    // }

    // int nodes = number_of_nodes(root);
    // printf("%d\n", nodes);
    reverse(&root);
    print_list(root);


    deallocate(&root);
    return 0;
} 




