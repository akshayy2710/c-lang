#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to create a new Node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to reverse the array using a chain of pointers
void reverseArray(int* arr, int size) {
    // Create a chain of pointers
    struct Node* head = createNode(arr[0]);
    struct Node* current = head;
    for (int i = 1; i < size; i++) {
        current->next = createNode(arr[i]);
        current = current->next;
    }

    // Traverse the chain and reverse the array
    int i = size - 1;
    current = head;
    while (current != NULL) {
        arr[i--] = current->data;
        current = current->next;
    }

    // Free the memory allocated for the chain
    struct Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

// Function to print the array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    reverseArray(arr, size);

    printf("Reversed array: ");
    printArray(arr, size);

    return 0;
}
