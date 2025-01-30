#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};
typedef struct node nt;

nt* insertMiddle(nt* head, int dataFind, int data) {
    nt* temp = head;
    nt* new1;
    new1 = (nt*) malloc(sizeof(nt));
    if (head != NULL) {
        while (temp->data != dataFind) {
            temp = temp->next;
        }
        new1->data = data;
        new1->next = NULL;
        new1->next = temp->next;
        temp->next = new1;
        return head;
    }
    else {
        new1->data = data;
        new1->next = NULL;
        head = new1;
        return head;
    }
    free(temp);
}

int main()  {
    nt* head = NULL;
    head = insertMiddle(head, 2, 3);
    head = insertMiddle(head, 3, 4);
    head = insertMiddle(head, 4, 5);
    head = insertMiddle(head, 5, 6);
    head = insertMiddle(head, 3, 7);

    nt* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    return 0;
}