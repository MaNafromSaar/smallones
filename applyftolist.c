#include <stdio.h>
#include <stdlib.h>

// Define the linked list node structure
typedef struct s_list
{
    int data;
    void *next;
} t_list;

// Function prototype for the function to be applied to each list element
typedef void (*input_func)(int);
// Assuming an output function is needed, though its use is not clear from the question
typedef void (*output_func)(void*);

// Function to apply a given function to all members of the list
void apply_to_all(t_list *list, input_func f, output_func out)
{
    while (list != NULL)
    {
        f(list->data); // Apply the function to the data of the current node
        // If there's something to be done with the output, call out() here
        list = (t_list*)list->next; // Move to the next node
    }
}

// Example function to be applied to each element
void print_data(int data)
{
    printf("%d\n", data);
}

// Example main function to demonstrate usage
int main()
{
    // Example list creation (normally, you'd have a function to add elements)
    t_list node3 = {3, NULL};
    t_list node2 = {2, &node3};
    t_list node1 = {1, &node2};

    // Apply print_data to each element of the list
    apply_to_all(&node1, print_data, NULL); // Assuming no output function is used

    return 0;
}
