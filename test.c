#include <stdio.h>

__attribute__ ((noinline)) void fun(int test)
{
  printf("value: %d\n", test);
}

int main()
{
  int v = 21;
  fun(v);
}
