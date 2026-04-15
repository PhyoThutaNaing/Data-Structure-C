#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure
struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

// Insert at beginning
void insert_begin(int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insert_end(int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Delete from beginning
void delete_begin() {
    if (head == NULL) return;

    struct node *temp = head;
    head = head->next;
    free(temp);
}

// Display (IMPORTANT: return string)
char* display() {
    static char result[1000];
    result[0] = '\0';

    struct node *temp = head;

    if (temp == NULL) {
        sprintf(result, "List is empty");
        return result;
    }

    while (temp != NULL) {
        char buffer[50];
        sprintf(buffer, "%d -> ", temp->data);
        strcat(result, buffer);
        temp = temp->next;
    }

    strcat(result, "NULL");
    return result;
}