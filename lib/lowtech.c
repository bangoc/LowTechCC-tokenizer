#include "lowtech.h"

#include <stdio.h>
#include <string.h>

SList* LowTechCC_Tok(char* input) {
  SList * list = SListCreate();
  const char* delims = " \n\t\v\f\r";

  char* token = strtok(input, delims);
  while (token != NULL) {
    SListAddTail(list, token);
    token = strtok(NULL, delims);
  }
  return list;
}