//Program: Assignment 6
//Name: Jakob Harrell

#include <stdio.h>

//Proto
double averageFinder(int temps[]);
int highFinder(int temps[]);
int lowFinder(int temps[]);


int main (void) {
  //var
  int temps[21];
  int j = 1;
  double average;
  int max, min;

  //prg
  printf("This program will analyze the temperatures of twenty-one days.\n");
  printf("Please enter the average temperature of the day.\n");
  printf("Please use fahrenheit.\n");
  for (int i = 0; i < 21; i++) {
    printf("Day %d: ", j);
    scanf(" %d", &temps[i]);
    j++;
  }

  average = averageFinder(temps);
  max = highFinder(temps);
  min = lowFinder(temps);

  printf("\n");
  printf("The average is: %.02lf\n", average);
  printf("The high is: %d\n", max);
  printf("The low is: %d\n", min);
  if (max > 113) {
    printf("WARNING: The high is outside the recommended range!\n");
  }
  if (min < -4) {
    printf("WARNING: The low is outside the recommended range!\n");
  }
  if (average > 113 || average < -4) {
    printf("WARNING: The average is outside the recommended range!\n");
  }

  return 0;
}



double averageFinder(int temps[]) {
  int sum = 0;
  double avg;
  for (int i = 0; i < 21; i++) {
    sum = sum + temps[i];
  }
  avg = (double)sum / 21;
  return avg;
}

int highFinder(int temps[]) {
  int c, i = 0;

  for (c = 0; c < 21; c++) {
    if (temps[c] > temps[i]) {
      i = c;
    }
  }

  return temps[i];
}

int lowFinder(int temps[]) {
  int c, i = 0;

  for (c = 0; c < 21; c++) {
    if (temps[c] < temps[i]) {
      i = c;
    }
  }

  return temps[i];
}
