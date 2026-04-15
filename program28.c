#include<stdio.h>
#include<stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

// Print forward
void printl(Node *head) {
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }
    printf("List: ");
    while(head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Print reverse
void print_rev(Node *head) {
    if(head == NULL) {
        printf("List is empty\n");
        return;
    }

    while(head->next != NULL)
        head = head->next;

    printf("Reverse: ");
    while(head != NULL) {
        printf("%d <-> ", head->data);
        head = head->prev;
    }
    printf("NULL\n");
}

// Length
int length(Node *head) {
    int count = 0;
    while(head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

// Insert at beginning
Node* insert_S(Node *head, int val) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = head;

    if(head != NULL)
        head->prev = newNode;

    return newNode;
}

// Insert at end
Node* insert_L(Node *head, int val) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = NULL;

    if(head == NULL) {
        newNode->prev = NULL;
        return newNode;
    }

    Node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;

    return head;
}

// Delete from beginning
Node* delete_S(Node *head) {
    if(head == NULL) {
        printf("List is empty\n");
        return head;
    }

    Node *temp = head;
    head = head->next;

    if(head != NULL)
        head->prev = NULL;

    printf("Deleted: %d\n", temp->data);
    free(temp);
    return head;
}

// Delete from end
Node* delete_L(Node *head) {
    if(head == NULL) {
        printf("List is empty\n");
        return head;
    }

    Node *temp = head;

    if(head->next == NULL) {
        printf("Deleted: %d\n", temp->data);
        free(temp);
        return NULL;
    }

    while(temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;

    printf("Deleted: %d\n", temp->data);
    free(temp);

    return head;
}

// Insert at index
Node* insert_at_k(Node *head, int val, int k) {
    if(k == 0)
        return insert_S(head, val);

    if(k == length(head))
        return insert_L(head, val);

    if(k < 0 || k > length(head)) {
        printf("Invalid index\n");
        return head;
    }

    Node *temp = head;
    for(int i = 0; i < k; i++)
        temp = temp->next;

    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;

    newNode->next = temp;
    newNode->prev = temp->prev;

    temp->prev->next = newNode;
    temp->prev = newNode;

    return head;
}

// Delete at index
Node* delete_at_k(Node *head, int k) {
    if(k == 0)
        return delete_S(head);

    if(k == length(head) - 1)
        return delete_L(head);

    if(k < 0 || k >= length(head)) {
        printf("Invalid index\n");
        return head;
    }

    Node *temp = head;
    for(int i = 0; i < k; i++)
        temp = temp->next;

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    printf("Deleted: %d\n", temp->data);
    free(temp);

    return head;
}

// MAIN
int main() {
    Node *head = NULL;
    int choice, val, k;

    while(1) {
        printf("\n--- DOUBLY LINKED LIST ---\n");
        printf("1. Insert Beginning\n");
        printf("2. Insert End\n");
        printf("3. Delete Beginning\n");
        printf("4. Delete End\n");
        printf("5. Insert at Index\n");
        printf("6. Delete at Index\n");
        printf("7. Display\n");
        printf("8. Display Reverse\n");
        printf("9. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                scanf("%d", &val);
                head = insert_S(head, val);
                break;

            case 2:
                scanf("%d", &val);
                head = insert_L(head, val);
                break;

            case 3:
                head = delete_S(head);
                break;

            case 4:
                head = delete_L(head);
                break;

            case 5:
                scanf("%d %d", &val, &k);
                head = insert_at_k(head, val, k);
                break;

            case 6:
                scanf("%d", &k);
                head = delete_at_k(head, k);
                break;

            case 7:
                printl(head);
                break;

            case 8:
                print_rev(head);
                break;

            case 9:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }
}