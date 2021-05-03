/*  Jakob Harrell
    CSC 250
*/

#include <stdio.h>

//proto
void print(char fileStructure[]);

//main
int main(void) {
  //variables
  char fileName[100];
  int fileSize;
  char fileType;
  long fileAccessed;
  int ret;
  char fileStructure[300];

  //data
  printf("./a.out\n");
  printf("Enter the type:");
  scanf(" %c", &fileType);
  printf("Enter the filename:");
  scanf(" %100s", &fileName);
  printf("Enter the access time:");
  scanf(" %ld", &fileAccessed);
  printf("Enter the size:");
  scanf(" %d", &fileSize);

  ret = sprintf(fileStructure, "Filename %s Size %d Type[%c] Accessed @ %ld\n", fileName, fileSize, fileType, fileAccessed);
  char *ptr = fileStructure;
  print(ptr);
  //printf("Filename %s Size %d Type[%c] Accessed @ %ld", fileName, fileSize, fileType, fileAccessed);

  return 0;
}

void print(char fileStructure[]) {

  printf("%s\n", fileStructure);

}
