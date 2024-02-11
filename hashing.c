#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10  // You can change this to any desired value

// Node structure for the linked list (chaining)
struct Node {
    int key;
    char* value;
    struct Node* next;
};

// Hash table structure
struct HashTable {
    struct Node* table[TABLE_SIZE];
};

// Hash function: k mod n
int hashFunction(int key, int n) {
    return key % n;
}

// Insert a key-value pair into the hash table
void insert(struct HashTable* hashTable, int key, char* value, int n) {
    int index = hashFunction(key, n);

    // Create a new node for the key-value pair
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;

    // Insert the new node at the beginning of the linked list (chaining)
    newNode->next = hashTable->table[index];
    hashTable->table[index] = newNode;
}

// Search for a key in the hash table and return the corresponding value
char* search(struct HashTable* hashTable, int key, int n) {
    int index = hashFunction(key, n);

    // Traverse the linked list at the specified index
    struct Node* currentNode = hashTable->table[index];
    while (currentNode != NULL) {
        if (currentNode->key == key) {
            return currentNode->value; // Return the value associated with the key
        }
        currentNode = currentNode->next;
    }

    return NULL; // Key not found
}

int main() {
    struct HashTable hashTable;

    // Initialize the hash table
    for (int i = 0; i < TABLE_SIZE; ++i) {
        hashTable.table[i] = NULL;
    }

    int n = 15;  // You can change this to any desired value

    // Inserting values
    insert(&hashTable, 5, "apple", n);
    insert(&hashTable, 15, "zebra", n);
    insert(&hashTable, 25, "cherry", n);

    // Searching for values
    char* result1 = search(&hashTable, 5, n);
    char* result2 = search(&hashTable, 15, n);
    char* result3 = search(&hashTable, 25, n);
    char* result4 = search(&hashTable, 35, n);

    // Displaying results
    printf("Result 1: %s\n", result1); // Output: Result 1: apple
    printf("Result 2: %s\n", result2); // Output: Result 2: banana
    printf("Result 3: %s\n", result3); // Output: Result 3: cherry
    printf("Result 4: %s\n", result4); // Output: Result 4: (null) (not found)

    return 0;
}
