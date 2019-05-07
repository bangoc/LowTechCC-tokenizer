#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lib/lowtech.h"
#include "lib/slist.h"

int main(int argc, char** argv) {
  if (argc == 1) {
    printf("Usage: \n"
           "./ltcc tok \"Hom nay ban an gi ?\"\n"
           "cat input_file | ./ltcc std\n");
    return 0;
  }

  if (strcmp(argv[1], "tok") == 0) {
    SList* result = LowTechCC_Tok(argv[2]);
    SNode* node = result->head;
    for (; node != 0; node = node->next) {
      printf("%s\n", node->data);
    }
    SListDelete(result);
  } else if (strcmp(argv[1], "std") == 0) {
    char* line = NULL;
    size_t len;
    long counter = 0;
    while (getline(&line, &len, stdin) >= 0) {
      SList* result = LowTechCC_Tok(line);
      counter += result->len;
      SListDelete(result);
      free(line);
      line = NULL;
    }
    printf("Number of tokens: %li\n", counter);
  } else {
    printf("Unknown command.\n");
  }
  return 0;
}
