//Program:Assignment_3.c
//Name: Jakob Frost
//Course: CSC 250

#include <stdio.h>
#include <stdlib.h> //random #'s
#include <time.h>
#include <stdbool.h>

//function proto
void getQuestion(int *ptr_num1, int *ptr_num2, int *ptr_answer);

int main(void) {
  //variables
  int num1, num2;
  int answer, correctAnswer;
  int gameCont = 2;
  bool user = true;
  srand(time(0));


  printf("Hello, this program will help you learn multiplication.\n");

  while (gameCont > 1) {
    getQuestion(&num1, &num2, &correctAnswer);
    do {
      printf("\nHow much is %d times %d: ", num1, num2);
      scanf("%d", &answer);
      if ( answer == correctAnswer) {
        printf("Very good!\n");
        user = true;
      }else{
        printf("No. Please try again");
        user = false;
      }
    }while (user == false);

  }
}

void getQuestion(int *ptr_num1, int *ptr_num2, int *ptr_answer) {
  int n1 = rand() % 9 + 1;
  int n2 = rand() % 9 + 1;
  int cAnswer = n1 * n2;
  *ptr_num1 = n1;
  *ptr_num2 = n2;
  *ptr_answer = cAnswer;
}
