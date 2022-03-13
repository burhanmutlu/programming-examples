#include<stdio.h>
#include <iostream>
int fun()
{
  static int count = 0;
  count++;
  return count;
}
/*
static int yeni(static int tp) // bu þekilde kullanýlmaz
{
	tp++;
	return tp;
}
*/
int main()
{
  printf("%d ", fun());
  printf("%d ", fun());
  int* p;
  static int tp;
  tp = 0;
  p = &tp;
  *p = 5;
  std::cout << *p;
  std::cout << ++tp;
  printf()
  return 0;
}
