#include <stdio.h>

// Define the structure for the singly linked list
typedef struct s_list {
    int data;
    struct s_list *next;
} t_list;

// Function to apply a given function to all elements of the list
void apply_to_all(t_list *head, void (*func)(int)) {
    t_list *current = head;
    while (current != NULL) {
        func(current->data);
        current = current->next;
    }
}

// Example function to be applied to each element
void print_data(int data) {
    printf("%d\n", data);
}

// Helper function to create a new node
t_list* create_node(int data) {
    t_list *new_node = (t_list*)malloc(sizeof(t_list));
    new_node->data = data;
    new_node->next = NULL;
    return new_node;
}

int main() {
    // Create a simple linked list for demonstration
    t_list *head = create_node(1);
    head->next = create_node(2);
    head->next->next = create_node(3);

    // Apply the print_data function to all elements of the list
    apply_to_all(head, print_data);

    // Free the allocated memory
    t_list *current = head;
    t_list *next;
    while (current != NULL) {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
