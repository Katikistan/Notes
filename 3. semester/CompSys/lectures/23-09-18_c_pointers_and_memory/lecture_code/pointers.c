#include <stdio.h>

int main(void) {
  int x = 2;
  int y = 3;
  printf("x: %d\n", x);
  printf("&x: %p\n", (void*)&x);
  printf("y: %d\n", y);
  printf("&y: %p\n", (void*)&y);

  int* px;
  int *py;

  px = &x;
  py = &y;

  // x has type T
  // &x has type T*
  printf("px: %p\n", (void*)px);
  printf("&px: %p\n", (void*)&px); // int**
  printf("py: %p\n", (void*)py);
  printf("&py: %p\n", (void*)&py); // int**

  *px = 5;

  printf("x: %d\n", x);
  printf("y: %d\n", y);
}
