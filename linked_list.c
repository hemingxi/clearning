
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* plinked_list;

void Insert(int x, struct Node* p) {
    
    // Create new node and set that as the starting node if linked list is empty.

    struct Node* new_node = malloc(sizeof(struct Node));

    new_node->data = x;
    new_node->next = NULL;
    
    if(plinked_list == NULL){
        plinked_list = new_node;
        return;
    }

    // Otherwise, travserse the linked list until you get to the last node.
    
    struct Node* temp = plinked_list;
    
    while(!(temp->next == NULL)){
        temp = temp->next;
    }
    temp->next = new_node;
    
}

void Print(struct Node* p) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp = plinked_list;
    
    if (temp == NULL) 
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
        Insert(x, plinked_list);
        Print(plinked_list);
    }
}

