//Program:Assignment_3.c
//Name: Jakob Frost
//Course: CSC 250

#include <stdio.h>
#include <stdlib.h> //random #'s
#include <time.h>
#include <stdbool.h>

//function proto
void getQuestion(int *ptr_num1, int *ptr_num2, int *ptr_answer);
void get_good_response();
void get_bad_response();

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
      if (answer ==-1) {
        gameCont = 0;
      } else if ( answer == correctAnswer) {
        get_good_response();
        //printf("%s\n", response);
        user = true;
      }else{
        get_bad_response();
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

void get_good_response(void) {
  int temp_op = rand() % 4;

  switch (temp_op)
  {
      case 0: printf("Very good!\n");
              break;
      case 1: printf("Excellent!\n");
              break;
      case 2: printf("Nice Work!\n");
              break;
      case 3: printf("Keep up the good work!\n");
              break;
      default:
              printf("Very good!\n");
  }
  printf("To exit please enter -1\n");
}

void get_bad_response(void) {
  int temp_op = rand() % 4;

  switch (temp_op)
  {
      case 0: printf("No. Please try again.");
              break;
      case 1: printf("Wrong. Try once more.");
              break;
      case 2: printf("Don't give up!");
              break;
      case 3: printf("No. Keep trying.");
              break;
      default:
              printf("No. Please try again.");
  }
}
