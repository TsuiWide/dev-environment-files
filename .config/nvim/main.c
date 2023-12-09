#include <stdio.h>

void foo(int count)
{
  if (count > 2) {
    printf("%d\n", count * count);
  }
  else {
    printf("%d\n", count + count);
  }
}

void main()
{
  printf("hello word\n");
  printf("\n");

  foo(6);
  foo(3);
  foo(6);
}
