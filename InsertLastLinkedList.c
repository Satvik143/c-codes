#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    int id;
    struct node *next;
};
typedef struct node nt;

nt* insert_last(nt* head, int data) {
    nt* temp = NULL;
    nt* new1 = (nt*) malloc(sizeof(nt));
    temp = head;
    if (temp != NULL) {
      if (temp->next != NULL) {
        while (temp->next != NULL) {
          temp = temp->next;
        } 
      }
    }
    else {
      new1->data = data;
      new1->next = NULL;
      head = new1;
      return head;
    }
    new1->data = data;
    new1->next = NULL;
    temp->next = new1;
    return head;
}

int main() {
    nt *head = NULL;

    head = insert_last(head, 5);
    head = insert_last(head, 10);
    head = insert_last(head, 15);
    head = insert_last(head, 20);

    nt *temp;
    temp = head;
    while (temp != NULL) {
        printf("%d - ", temp->data);
        temp = temp->next;
    }
}
