
#include <stdio.h>
#include <stdlib.h>

// To do: 
// √ Clean up current code to remove the unnecessary Node* p input
// √ Implement insert at beginning code
// Implement version where the linked list is a local variable 
//      Options: Insert functions should return Node*
//               Or pass pointer to pointer to the Insert function, and it can return void
// Insert node at nth position
// Delete node at nth position
// Reverse a linked list iterative
// Print elements of a linked list in forward ...
// Reverse a linked list using recursion

struct Node {
    int data;
    struct Node* next;
};

struct Node* plinked_list;

void Insert_At_End(int x, struct Node* p) {
    
    // You should use the pointer p that's passed to the function
    // Create new node and set that as the starting node if linked list is empty.

    if (plinked_list == NULL) {
        plinked_list = malloc(sizeof(struct Node));
        plinked_list->data = x;
        return;
    }

    // Otherwise, travserse the linked list until you get to the last node.
    
    struct Node* temp = plinked_list;
    
    while(!(temp->next == NULL)){
        temp = temp->next;
    }
    temp->next = malloc(sizeof(struct Node));
    (temp->next)->data = x; 
    
}

void Insert_At_Beg(int x) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = plinked_list;
    plinked_list = temp;
}

void Print(struct Node* p) {
    // You should use the pointer p that's passed to the function
    
    struct Node* temp = malloc(sizeof(struct Node));
    temp = plinked_list;
    
    if (temp == NULL) // this condition is unncessary because the while loop will not execute if the list is null
        return;

    while (!(temp == NULL)) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(){   
    plinked_list = NULL; 

    printf("How many numbers : ");
    int n, i, x;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("Enter the number : ");
        scanf("%d", &x);
        //Insert_At_End(x, plinked_list);
        Insert_At_Beg(x);
        Print(plinked_list);
    }
}

