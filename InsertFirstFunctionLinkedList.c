#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    int id;
    struct node *next;
};
typedef struct node nt;

nt* insert_first(nt* head, int data) {
    nt* new1;
    new1 = (nt*) malloc(sizeof(nt));

    if (head == NULL) {
      new1->data = data;
      new1->next = NULL;
      head = new1;
      return head;
    }
    new1->data = data;
    new1->next = head;
    head = new1;
    return head;
}

int main() {
    nt* head = NULL;

    head = insert_first(head, 5);
    head = insert_first(head, 10);

    nt *temp;
    temp = head;
    while (temp != NULL) {
        printf("%d - ", temp->data);
        temp = temp->next;
    }
    return 0;
}