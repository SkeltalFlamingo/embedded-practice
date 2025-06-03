#include<stdio.h>

int main() {
  
  int num = 5;

  int *numPointer = &num;

  printf("numPointer: %p\n", numPointer);
  printf("de-referenced numPointer: %d\n", *numPointer);

  int myNumbers[] = {23, 42, 56, 34};

  printf("array length: %d", sizeof(myNumbers) / sizeof(*myNumbers));

  for (int i = 0; i < sizeof(myNumbers) / sizeof(*myNumbers) ; i++) {
    printf("element address: %p \nelement value: %d\n", (myNumbers + i), *(myNumbers + i));
  }

  return 0;
}