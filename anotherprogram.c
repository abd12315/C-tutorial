#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
  if (argc != 4) {
    printf("Usage:%s <string1> <string2>", argv[0]);
    return 1;
  }

  char input[15];
  char string1[] = "Hello World";
  char string2[15];

  if (strcmp(input, "Print") == 0) {
    strcpy(string1, string2);
    printf("string1: %s\n", string1);
    printf("string2: %s\n", string2);
  }

  // end program
  return 0;
   //faliure
}
