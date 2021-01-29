//Program: Assignment_1
//Name: Jakob Harrell
//Course: CSC 250
//Date: 1/13/2021

#include <stdio.h>

int main(void) {
    //variables
    double loan = 0;
    double rate = 0;
    int days = 0;
    double charge = 0;

    //program
    while (loan != -1) {
      printf("Enter loan principal (-1 to end): ");
      scanf("%lf", &loan);
      if (loan != -1) {
        printf("Enter interest rate: ");
        scanf("%lf", &rate);
        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        //calculate
        charge = (loan * rate * days / 365);

        printf("The interest charge is $%.2lf\n\n", charge);
      }
    }
}
