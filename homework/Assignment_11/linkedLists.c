/*  Jakob Harrell
    CSC 250
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char data;
  struct node * next;
}node;

//proto
node * createLinkedList(int numOfNodes);
node * copyList(node * head);
node * reverseList(node * root);
void displayList(node * head);

//main
int main(void) {
  //variables
  int numOfNodes = 5; // number of nodes

  //create lists
  node * HEAD = NULL;
  node * DAEH = NULL;
  HEAD = createLinkedList(numOfNodes);
  DAEH = copyList(HEAD);
  DAEH = reverseList(DAEH);

  //display lists
  printf("\n\nThe list is: \n");
  displayList(HEAD);
  printf("\nThe reversed list is:\n");
  displayList(DAEH);

  return 0;
}

node * createLinkedList(int numOfNodes) {
  int i = 0;
  node * head = NULL;
  node * temp = NULL;
  node * p = NULL;

  printf("\n");
  for(i = 0; i < numOfNodes; i++) {
    //individual node create
    temp = (node*)malloc(sizeof(node));
    printf("Enter the data for node number %d: ", i +1);
    scanf(" %c", &(temp->data));
    temp->next = NULL;

    if(head == NULL) {
      head = temp;
    }else {
      p = head;
      while(p-> next !=NULL){
        p = p->next;
      }
      p->next = temp;
    }
  }
  return head;
}

node * copyList(node * head) {
  if (head == NULL) {
    return NULL;
  } else {
    node* daeh = (node*)malloc(sizeof(node));
    daeh->data = head->data;
    daeh->next = copyList(head->next);

    return daeh;
  }
}

node *  reverseList(node * root){
  node * new_root = 0;
  while (root) {
    node * next = root->next;
    root->next = new_root;
    new_root = root;
    root = next;
  }
  
  return new_root;
}

void displayList(node * head) {
  node * p = head;

  while(p != NULL) {
    printf("%c --> ", p->data);
    p = p->next;
  }
  printf("Null\n");
}
