//Program:Assignment_3.c
//Name: Jakob Frost
//Course: CSC 250

#include <stdio.h>
#include <stdlib.h> //random #'s
#include <time.h>
#include <stdbool.h>

//function proto
void getQuestion(int *ptr_num1, int *ptr_num2, int *ptr_answer, int diffNum, int choice, int *ptr_Q);
void get_good_response();
void get_bad_response();
void diffCheck(int *ptr_diffNum);
void multi(int);
void add(int);
void sub(int);
void mix(int);

int main(void) {
  //var
  int choice;
  bool ceck;
  int z = 1;

  //program
  while(z != 0) {
    do {
      printf("This math program will help learn math.\n");
      printf("Please pick a option: \n");
      printf("1. Addition\n");
      printf("2. Subtraction\n");
      printf("3. multiplication\n");
      printf("4. Mixture\n");
      printf("Choice: ");
      scanf("%d", &choice);
      if (choice == 1) {
        printf("\n\n\n");
        add(choice);
        ceck = true;
      } else if (choice == 2) {
        printf("\n\n\n");
        sub(choice);
        ceck = true;
      } else if (choice == 3) {
        printf("\n\n\n");
        multi(choice);
        ceck = true;
      } else if (choice == 4) {
        printf("\n\n\n");
        mix(choice);
        ceck = true;
      }else {
        ceck = false;
        printf("Error: Please enter correct option.\n");
      }
    }while(!ceck);
  }

}


void mix(int choice) {
  //variables
  int num1, num2;
  int answer, correctAnswer;
  int gameCont;
  bool user = true;
  srand(time(0));
  int correctAnswers, incorrectAnswers, askedQuestions;
  double percent;
  int gameCont2 = 1;
  int diffNum = 0;
  int Q;

  while (gameCont2 != 0) {
    printf("Hello, this program will help you learn addition.\n");
    diffCheck(&diffNum);
    gameCont = 0;
    askedQuestions = 0;
    correctAnswers = 0;
    incorrectAnswers = 0;
    percent = 0;

    while (gameCont < 10) {
      getQuestion(&num1, &num2, &correctAnswer, diffNum, choice, &Q);
      askedQuestions++;
      do {
        if (Q == 0) {
          printf("\nHow much is %d plus %d: ", num1, num2);
        }else if (Q == 1) {
          printf("\nHow much is %d minus %d: ", num1, num2);
        }
        else if (Q == 2) {
          printf("\nHow much is %d times %d: ", num1, num2);
        }
        scanf("%d", &answer);
        if (answer ==-1) {
          gameCont = 10;
        } else if ( answer == correctAnswer) {
          get_good_response();
          gameCont++;
          user = true;
        }else{
          get_bad_response();
          user = false;
        }
        if (correctAnswers + incorrectAnswers != askedQuestions) {
          if (user) {
            correctAnswers++;
          }else if (!user) {
            incorrectAnswers++;
          }
        }
      }while (user == false);

    }
    percent = (((double)correctAnswers / askedQuestions) * 100);
    printf("\nYou scored %.0lf%%.\n", percent);
    if (percent >= 75) {
      printf("Congratulations, you are ready to go to the next level!\n\n\n");
    } else if (percent < 75) {
      printf("Please ask your teacher for extra help.\n\n\n");
    }else {printf("ERROR");}

    gameCont2 = 0;

  }

}

void sub(int choice) {
  //variables
  int num1, num2;
  int answer, correctAnswer;
  int gameCont;
  bool user = true;
  srand(time(0));
  int correctAnswers, incorrectAnswers, askedQuestions;
  double percent;
  int gameCont2 = 1;
  int diffNum = 0;
  int Q;

  while (gameCont2 != 0) {
    printf("Hello, this program will help you learn addition.\n");
    diffCheck(&diffNum);
    gameCont = 0;
    askedQuestions = 0;
    correctAnswers = 0;
    incorrectAnswers = 0;
    percent = 0;

    while (gameCont < 10) {
      getQuestion(&num1, &num2, &correctAnswer, diffNum, choice, &Q);
      askedQuestions++;
      do {
        printf("\nHow much is %d minus %d: ", num1, num2);
        scanf("%d", &answer);
        if (answer ==-1) {
          gameCont = 10;
        } else if ( answer == correctAnswer) {
          get_good_response();
          gameCont++;
          user = true;
        }else{
          get_bad_response();
          user = false;
        }
        if (correctAnswers + incorrectAnswers != askedQuestions) {
          if (user) {
            correctAnswers++;
          }else if (!user) {
            incorrectAnswers++;
          }
        }
      }while (user == false);

    }
    percent = (((double)correctAnswers / askedQuestions) * 100);
    printf("\nYou scored %.0lf%%.\n", percent);
    if (percent >= 75) {
      printf("Congratulations, you are ready to go to the next level!\n\n\n");
    } else if (percent < 75) {
      printf("Please ask your teacher for extra help.\n\n\n");
    }else {printf("ERROR");}

    gameCont2 = 0;

  }

}

void add(int choice) {
  //variables
  int num1, num2;
  int answer, correctAnswer;
  int gameCont;
  bool user = true;
  srand(time(0));
  int correctAnswers, incorrectAnswers, askedQuestions;
  double percent;
  int gameCont2 = 1;
  int diffNum = 0;
  int Q;

  while (gameCont2 != 0) {
    printf("Hello, this program will help you learn addition.\n");
    diffCheck(&diffNum);
    gameCont = 0;
    askedQuestions = 0;
    correctAnswers = 0;
    incorrectAnswers = 0;
    percent = 0;

    while (gameCont < 10) {
      getQuestion(&num1, &num2, &correctAnswer, diffNum, choice, &Q);
      askedQuestions++;
      do {
        printf("\nHow much is %d plus %d: ", num1, num2);
        scanf("%d", &answer);
        if (answer ==-1) {
          gameCont = 10;
        } else if ( answer == correctAnswer) {
          get_good_response();
          gameCont++;
          user = true;
        }else{
          get_bad_response();
          user = false;
        }
        if (correctAnswers + incorrectAnswers != askedQuestions) {
          if (user) {
            correctAnswers++;
          }else if (!user) {
            incorrectAnswers++;
          }
        }
      }while (user == false);

    }
    percent = (((double)correctAnswers / askedQuestions) * 100);
    printf("\nYou scored %.0lf%%.\n", percent);
    if (percent >= 75) {
      printf("Congratulations, you are ready to go to the next level!\n\n\n");
    } else if (percent < 75) {
      printf("Please ask your teacher for extra help.\n\n\n");
    }else {printf("ERROR");}

    gameCont2 = 0;

  }

}

void multi(int choice) {
  //variables
  int num1, num2;
  int answer, correctAnswer;
  int gameCont;
  bool user = true;
  srand(time(0));
  int correctAnswers, incorrectAnswers, askedQuestions;
  double percent;
  int gameCont2 = 1;
  int diffNum = 0;
  int Q;

  while (gameCont2 != 0) {
    printf("Hello, this program will help you learn multiplication.\n");
    diffCheck(&diffNum);
    gameCont = 0;
    askedQuestions = 0;
    correctAnswers = 0;
    incorrectAnswers = 0;
    percent = 0;

    while (gameCont < 10) {
      getQuestion(&num1, &num2, &correctAnswer, diffNum, choice, &Q);
      askedQuestions++;
      do {
        printf("\nHow much is %d times %d: ", num1, num2);
        scanf("%d", &answer);
        if (answer ==-1) {
          gameCont = 10;
        } else if ( answer == correctAnswer) {
          get_good_response();
          gameCont++;
          user = true;
        }else{
          get_bad_response();
          user = false;
        }
        if (correctAnswers + incorrectAnswers != askedQuestions) {
          if (user) {
            correctAnswers++;
          }else if (!user) {
            incorrectAnswers++;
          }
        }
      }while (user == false);

    }
    percent = (((double)correctAnswers / askedQuestions) * 100);
    printf("\nYou scored %.0lf%%.\n", percent);
    if (percent >= 75) {
      printf("Congratulations, you are ready to go to the next level!\n\n\n");
    } else if (percent < 75) {
      printf("Please ask your teacher for extra help.\n\n\n");
    }else {printf("ERROR");}

    gameCont2 = 0;

  }

}

void getQuestion(int *ptr_num1, int *ptr_num2, int *ptr_answer, int diffNum, int choice, int *ptr_Q) {
  int n1,n2;
  int cAnswer;
  int Q;

  if (diffNum == 2) {
    n1 = rand() % 99 + 1;
    n2 = rand() % 99 + 1;
  } else if (diffNum == 1) {
    n1 = rand() % 9 + 1;
    n2 = rand() % 9 + 1;
  }

  if (choice == 1) {
    cAnswer = n1 + n2;
  }else if (choice == 2) {
    cAnswer = n1 - n2;
  }else if (choice == 3) {
    cAnswer = n1 * n2;
  }else if (choice == 4) {
    int temp_op = rand() % 3;
    switch (temp_op) {
      case 0: cAnswer = n1 + n2;
        Q = 0;
        break;
      case 1: cAnswer = n1 - n2;
        Q = 1;
        break;
      case 2: cAnswer = n1 * n2;
        Q = 2;
        break;
    }

    *ptr_Q = Q;
  }

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
  //printf("To exit please enter -1\n");
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

void diffCheck(int *ptr_diffNum) {
  int level;
  bool check;
  do {
    printf("Please enter your difficulty level(1,2): ");
    scanf("%d", &level);
    if (level == 2) {
      level = 2;
      check = true;
    }else if (level == 1) {
      level = 1;
      check = true;
    }else {
      printf("Error: ");
      check = false;
    }
  }while(!check);
  *ptr_diffNum = level;
}
