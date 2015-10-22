/* Example code for Software Systems at Olin College.

Based on an example from http://www.learn-c.org/en/Linked_lists

Copyright 2014 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node * next;
} Node;

Node *make_node(int val, Node *next) {
    Node *node = malloc(sizeof(Node));
    node->val = val;
    node->next = next;
    return node;
}

void print_list(Node *head) {
    Node *current = head;

    while (current != NULL) {
        printf("%d\n", current->val);
        current = current->next;
    }
}

int pop(Node **head) {
    int retval;
    Node *next_node;

    if (*head == NULL) {
        //If linked list doesn't exist, return 1
        return -1;
    }

    next_node = (*head)->next;
    retval = (*head)->val;
    free(*head);
    *head = next_node;

    return retval;
}

// Add a new element to the beginning of the list.
void push(Node **head, int val) {
    if (*head == NULL) {
        return;
    }

    Node *first_node = make_node(val, *head);
    *head = first_node;
}

// Remove the first element with the given value; return the number
// of nodes removed.
int remove_by_value(Node **head, int val) {
    Node *current = *head;
    Node *victim;

    if (current == NULL) {
        return 0;
    }


    while (current != NULL){

        if(current->next->val == val){
            current->next = current->next->next;
            free(current->next);
            return 1;
        }

        current = current->next;
            
        // if (current->next != NULL){
        //     current = current->next;
        // }
        // else{
        //     return 0;
        // }
    }
    return 0;
}

// Reverse the elements of the list without allocating new nodes.
void reverse(Node **head) {
    Node *current = *head;
    Node *next, *temp;

    if (current == NULL || current->next == NULL){
        return;
    }

    //Starting the last element of the linked list
    next = current->next;
    current->next = NULL;


    // while (current->next != NULL){
    //     temp = current->next->next;
    //     current->next->next = current;
    //     //current->next = NULL;
    //     current = temp;
    // }

    while (next != NULL){
        temp = next->next;
        next->next = current;
        current = next;
        next = temp;
    }
    *head = current;

}

int main() {
    Node *test_list = make_node(1, NULL);
    test_list->next = make_node(2, NULL);
    test_list->next->next = make_node(3, NULL);
    test_list->next->next->next = make_node(4, NULL);

    int retval = pop(&test_list);
    push(&test_list, retval+10);

    remove_by_value(&test_list, 3);
    //remove_by_value(&test_list, 7);

    reverse(&test_list);

    print_list(test_list);
}
