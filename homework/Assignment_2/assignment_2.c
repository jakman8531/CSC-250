//Program: Assignment_2
//Name: Jakob Harrell
//Course: CSC 250
//Date: 01/20/2021

#include <stdio.h>
#define FAIR_TAX .23

//Prototypes
void get_expenses(double *ptr_housing, double *ptr_food, double *ptr_clothing, double *ptr_transportation, double *ptr_education, double *ptr_healthcare, double *ptr_vacations);

int main(void) {
  //variables
  double housing, food, clothing, transportation, education, healthcare, vacations;
  double taxed_housing, taxed_food, taxed_clothing, taxed_transportation, taxed_education, taxed_healthcare, taxed_vacations;
  double total;

  //gather data
  printf("This program will take your spending and find the amount of taxes");
  printf("\nyou would pay under the 'Fair Tax', which is 23%% on all purchases.");
  printf("\n");
  get_expenses(&housing, &food, &clothing, &transportation, &education, &healthcare, &vacations);

  //Calculating
  taxed_housing = (housing * FAIR_TAX);
  taxed_food = (food * FAIR_TAX);
  taxed_clothing = (clothing * FAIR_TAX);
  taxed_transportation = (transportation * FAIR_TAX);
  taxed_education = (education * FAIR_TAX);
  taxed_healthcare = (healthcare * FAIR_TAX);
  taxed_vacations = (vacations * FAIR_TAX);
  total = (taxed_housing + taxed_food + taxed_clothing + taxed_transportation + taxed_education + taxed_healthcare + taxed_vacations);

  //display
  printf("\n\n");
  printf("Categories_________ tax cost\n");
  printf("Housing____________%9.02lf\n", taxed_housing);
  printf("Food_______________%9.02lf\n", taxed_food);
  printf("Clothing___________%9.02lf\n", taxed_clothing);
  printf("Transportation_____%9.02lf\n", taxed_transportation);
  printf("Education__________%9.02lf\n", taxed_education);
  printf("Healthcare_________%9.02lf\n", taxed_healthcare);
  printf("Vacations__________%9.02lf\n", taxed_vacations);
  printf("\n");
  printf("Total Tax__________%9.02lf\n", total);

  return 0;
}

void get_expenses(double *ptr_housing, double *ptr_food, double *ptr_clothing, double *ptr_transportation, double *ptr_education, double *ptr_healthcare, double *ptr_vacations) {
  //variables
  double housing, food, clothing, transportation, education, healthcare, vacations;

  //gather data
  printf("\nPlease enter how much you have spent on housing: $");
  scanf("%lf", &housing);
  printf("Please enter how much you have spent on food: $");
  scanf("%lf", &food);
  printf("Please enter how much you have spent on clothing: $");
  scanf("%lf", &clothing);
  printf("Please enter how much you have spent on transportation: $");
  scanf("%lf", &transportation);
  printf("Please enter how much you have spent on education: $");
  scanf("%lf", &education);
  printf("Please enter how much you have spent on healthcare: $");
  scanf("%lf", &healthcare);
  printf("Please enter how much you have spent on vacations: $");
  scanf("%lf", &vacations);

  //move data
  *ptr_housing = housing;
  *ptr_food = food;
  *ptr_clothing = clothing;
  *ptr_transportation = transportation;
  *ptr_education = education;
  *ptr_healthcare = healthcare;
  *ptr_vacations = vacations;
}
