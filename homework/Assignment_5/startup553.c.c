#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplication(void); // function prototype
void correctMessage(void); // function prototype
void incorrectMessage(void); // function prototype

int main()
{
   srand(time(NULL)); // seed random number generator
   multiplication(); // begin multiplication practice
}

// multiplication produces pairs of random numbers and
// prompts user for product
void multiplication(void)
{
  //var
  int diffLevel;
  int factors;

   int right = 0; // total number of right responses
   int wrong = 0; // total number of wrong responses

   // loop 10 times
   for (unsigned int i = 1; i <= 10; i++) {
      int x = rand() % 10; // generate 1-digit random number
      int y = rand() % 10; // generate another 1-digit random number

      printf("How much is %d times %d? ", x, y);
      int response; // user response for product
      scanf("%d", &response);

      // loop while not correct response
      while (response != x * y) {
         wrong++; // update total number of wrong responses
         incorrectMessage();
         scanf("%d", &response);
      }

      right++; // update total number of correct responses
      correctMessage();
   }

   // determine if help is needed
   if ((double) right / (right + wrong) < .75) {
      puts("Please ask your teacher for extra help.");
   }
   else {
      puts("Congratulations, you are ready to go to the next level!");
   }

   printf("That's all for now. Bye.\n");
}

// correctMessage randomly chooses response to correct answer
void correctMessage(void)
{
   // generate random number between 0 and 3
   switch (rand() % 4) {
      // display random response
      case 0:
         puts("Very good!\n");
         break; // exit switch
      case 1:
         puts("Excellent!\n");
         break; // exit switch
      case 2:
         puts("Nice work!\n");
         break; // exit switch
      case 3:
         puts("Keep up the good work!\n");
         break; // exit switch
   }
}

// incorrectMessage randomly chooses response to incorrect answer
void incorrectMessage(void)
{
   // generate random number between 0 and 3
   switch (rand() % 4) {
      // display random response
      case 0:
         printf("%s", "No. Please try again.\n? ");
         break; // exit switch
      case 1:
         printf("%s", "Wrong. Try once more.\n? ");
         break; // exit switch
      case 2:
         printf("%s", "Don't give up!\n? ");
         break; // exit switch
      case 3:
         printf("%s", "No. Keep trying.\n? ");
         break; // exit switch
   }
}
