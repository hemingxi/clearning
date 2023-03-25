
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* plinked_list;

void Insert(int x, struct Node* p) {
    struct Node* temp = malloc(sizeof(struct Node));
    
    temp->data = x;
    temp->next = NULL;
    
    if(plinked_list == NULL){
        plinked_list = temp;
    } else {
        plinked_list->next = temp;
    }
}

void Print(struct Node* p) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp = plinked_list;
    
    if (temp == NULL) 
        return;

    while (!(temp == NULL)) {
        printf("%d ", temp->data);
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

