#include <stdio.h>
#include <stdlib.h>

// Node structure for the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the linked list
void insertNode(struct Node** head, int data) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // If the list is empty, make the new node the head
    if (*head == NULL) {
        *head = newNode;
    } else {
        // Traverse to the end and insert the new node
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Function to count the number of nodes in the linked list
int countNodes(struct Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    // Initialize an empty linked list
    struct Node* head = NULL;

    // Insert nodes into the linked list
    insertNode(&head, 1);
    insertNode(&head, 2);
    insertNode(&head, 3);
    insertNode(&head, 4);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    // Count the number of nodes
    int nodeCount = countNodes(head);
    printf("Number of nodes: %d\n", nodeCount);

    return 0;
}
