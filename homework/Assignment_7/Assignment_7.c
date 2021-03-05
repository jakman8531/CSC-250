#include <stdio.h>
#include <string.h>

//Proto
int lengthFinder(char name[]);
void reverser(char name[]);
int spaceFinder(char name[]);

//main
int main(void) {
  //var
  char firstName[25];
  char lastName[25];
  char fullName[50];
  int length, space;

  //step 1
  printf("Please enter your full name: ");
  scanf(" %25s %25s", firstName, lastName);
  strcpy(fullName, firstName);
  strcat(fullName, " ");       // Concatenating a space
  strcat(fullName, lastName);

  //step 2
  char *ptr = fullName;
  length = lengthFinder(ptr);
  printf("\nthere are %d characters in your name.", length);

  //part 3
  reverser(ptr);

  //part 4
  space = spaceFinder(ptr);
  printf("\nThe space is in the %d element of the array.", space);

  //part 5
  printf("\n%s %s", lastName, firstName);

  return 0;
}

int lengthFinder(char name[]) {
  int length = 0;

  for (int i = 0; name[i] != '\0'; i++) {
    if (name[i] != ' ') {
      length++;
    }
  }

  return length;
}

void reverser(char name[]) {
  int end;
  end = strlen(name) - 1;
  printf("\n");
  for (int i = end; i >= 0; i--) {
    printf("%c", name[i]);
  }
}

int spaceFinder(char name[]) {
  int spaceloc;

  for (int i = 0; name[i] != '\0'; i++) {
    if (name[i] == ' ') {
      spaceloc = i;
    }
  }

  return spaceloc;
}
