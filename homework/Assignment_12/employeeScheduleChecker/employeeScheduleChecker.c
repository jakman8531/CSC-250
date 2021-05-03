//Program: availabltyGenerator.c
//Name: Jakob Frost
//Description: Aloows people to input their availblity.

#include <stdio.h>
#include <unistd.h>

//functions
int getChoiceMenu(void);
void changeAvailability(char employeeID[64]);
void checkAvailability(char employeeID[64]);

int main(void) {
  //variable
  char fName[15];
  char lName[20];
  char employeeID[64];
  int eNum;
  int ret;

  printf("This program will update your availablity.\n");
  printf("Please enter your first name: ");
  scanf(" %15s", fName);
  printf("Please enter your last name: ");
  scanf(" %20s", lName);
  printf("Please enter employee #: ");
  scanf(" %d", &eNum);

  ret = sprintf(employeeID, "%s_%s_%d.txt", lName, fName, eNum);

  chdir("employeeFiles");
  FILE * employeeFile;
  employeeFile = fopen(employeeID, "r");
  if (employeeFile == 0) {
    FILE * employeeFile;
    employeeFile = fopen(employeeID, "w");
    fclose(employeeFile);
    employeeFile = fopen(employeeID, "r");
  }
  fclose(employeeFile);

  int c = 0;
  while (c != 3) {
    c = getChoiceMenu();
    switch (c) {
      case 1:
        changeAvailability(employeeID);
        break;
      case 2:
        checkAvailability(employeeID);
        break;
      case 3:
        printf("\n\nHave a nice Day\n\n");
    }
  }

  return 0;
}



int getChoiceMenu(void){
   int choice = 0;

   printf( "\n\n*******************\n");
   printf( "\nChoose a menu item\n");
   printf( "  1. Change Availability\n");
   printf( "  2. Check Availability\n");
   printf( "  3. Quit\n");
   printf( "\n");

   printf( "  Enter the number (1-3) of your choice: ");
   scanf( "%d", &choice );

   while(choice < 1 || choice > 4) {
     printf("\n  Error not a valid option, Enter (1-3): ");
     scanf( "%d", &choice );
   }

   return choice;
}



void changeAvailability(char employeeID[64]) {
  //var
  int eHour, eMin, lHour, lMin;
  char earlyStart[7][7];
  char lateStart[7][7];
  int ret;

  //
  printf( "\n\n*******************\n");
  printf("Change Availablity");
  printf( "\n\n*******************\n");

  char weekDays [7][12] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
  for (int i = 0; i < 7; i++) {
    do {
      printf("Please enter the earliest you can work on %s (hh:mm): ", weekDays[i]);
      scanf(" %d:%d", &eHour, &eMin);
      if (eHour > 24 || eHour < 1 || eMin > 59 || eMin < 0) {
        printf("Error please enter correctly.\n");
      }
    }while(eHour > 24 || eHour < 1 || eMin > 59 || eMin < 0);

    do {
      printf("Please enter the latest you can work on %s (hh:mm): ", weekDays[i]);
      scanf(" %d:%d", &lHour, &lMin);
      if (lHour > 24 || lHour < 1 || lMin > 59 || lMin < 0) {
        printf("Error please enter correctly.\n");
      }
    }while(lHour > 24 || lHour < 1 || lMin > 59 || lMin < 0);


    if (eHour < 10) {
      if (eMin < 10) {
        ret = sprintf(earlyStart[i], "0%d:0%d", eHour, eMin);
      }else {
        ret = sprintf(earlyStart[i], "0%d:%d", eHour, eMin);
      }
    }else if (eHour >= 10) {
      if (eMin < 10) {
        ret = sprintf(earlyStart[i], "%d:0%d", eHour, eMin);
      }else {
        ret = sprintf(earlyStart[i], "%d:%d", eHour, eMin);
      }
    }

    if (lHour < 10) {
      if (lMin < 10) {
        ret = sprintf(lateStart[i], "0%d:0%d", lHour, lMin);
      }else {
        ret = sprintf(lateStart[i], "0%d:%d", lHour, lMin);
      }
    }else if (lHour >= 10) {
      if (lMin < 10) {
        ret = sprintf(lateStart[i], "%d:0%d", lHour, lMin);
      }else {
        ret = sprintf(lateStart[i], "%d:%d", lHour, lMin);
      }
    }

    printf("\n");
  }

  FILE * employeeFile;
  employeeFile = fopen(employeeID, "w");

  for (int j = 0; j < 7; j++) {
    fprintf(employeeFile, "%s Start: %s\n",weekDays[j], earlyStart[j]);
    fprintf(employeeFile, "%s End: %s\n",weekDays[j], lateStart[j]);
    fprintf(employeeFile, "\n");
  }

  fclose(employeeFile);
  return;
}



void checkAvailability(char employeeID[64]){
  printf("\n\n");
  //var
  char scanned1[64];
  char scanned2[64];
  char scanned3[64];
  char scanned4[64];
  char scanned5[64];
  char scanned6[64];

  FILE * employeeFile;
  employeeFile = fopen(employeeID, "r");

  for (int j = 0; j < 7; j++) {
    fscanf(employeeFile, "%s %s %s", scanned1, scanned2, scanned3);
    fscanf(employeeFile, "%s %s %s", scanned4, scanned5, scanned6);
    printf("%s %s %s\n", scanned1, scanned2, scanned3);
    printf("%s %s   %s\n", scanned4, scanned5, scanned6);
    printf("\n");
  }

  fclose(employeeFile);
}
