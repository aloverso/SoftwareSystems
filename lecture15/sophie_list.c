/* Example code for Software Systems at Olin College.

Based on an example from http://www.learn-c.org/en/Linked_lists

Copyright 2014 Allen Downey
License: Creative Commons Attribution-ShareAlike 3.0

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int val;
    struct node *next;
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
        return -1;
    }

    Node *first = *head;

    next_node = first->next;
    retval = first->val;
    free(first);
    *head = next_node;

    return retval;
}

// Add a new element to the beginning of the list.
void push(Node **head, int val) {
    if (*head == NULL) {
        return;
    }

    Node *new_node = make_node(val, *head);
    *head = new_node;
}

// Remove the first element with the given value; return the number
// of nodes removed.
int remove_by_value(Node **head, int val) {
    Node *current = *head;
    int count = 0;

    while (current != NULL && current->val != val) {
        pop(&current);
        count++;
    }
    if (current != NULL)
    {
        Node *next_node = current->next;
        free(current);
        *head = next_node;
        return count+1;
    }
    else
    {
        *head = NULL;
        return -1;
    }
}

// Reverse the elements of the list without allocating new nodes.
void reverse(Node **head) {
    Node *current = *head;
    Node *prev = NULL;
    while (current != NULL)
    {
        Node *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *head = prev;
}


int main() {
    Node *test_list = make_node(1, NULL);
    test_list->next = make_node(2, NULL);
    test_list->next->next = make_node(3, NULL);
    test_list->next->next->next = make_node(4, NULL);

    int retval = pop(&test_list);
    push(&test_list, retval+10);
    print_list(test_list);

    remove_by_value(&test_list, 3);
    //remove_by_value(&test_list, 7);

    push(&test_list, 1);
    push(&test_list, 2);
    push(&test_list, 3);

    print_list(test_list);

    reverse(&test_list);

    print_list(test_list);
}
