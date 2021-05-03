/*  Jakob Harrell
    CSC 250
*/

#include <stdio.h>

//proto
int options(void);
void printAll(void);
void printIndex(void);
void addItem(void);
void writeOut(void);

//main
int main(void) {
  //variables
  int userChoice;

  //main
  userChoice = options();
  if (userChoice == 1){
    printAll();
  }else if (userChoice == 2){
    printIndex();
  }else if (userChoice == 3){
    addItem();
  }else if (userChoice == 4){
    writeOut();
  }else if (userChoice == 5){}

  return 0;
}

//Get user options (works)
int options(void) {
  int O;

  printf("\n\n");
  printf("\nPlease select an option.");
  printf("\n  1. Print All");
  printf("\n  2. Print from Index");
  printf("\n  3. Add Item");
  printf("\n  4. Write Out");
  printf("\n  5. Quit\n");

  do {
    printf("Choice: ");
    scanf(" %d", &O);
  }while(O < 1 || O > 5);

  return O;
}

void printAll(void){ }

void printIndex(void){}

void addItem(void){}

void writeOut(void){}
