#include<stdio.h>
#include<stdlib.h>

int calculate(int a, int b) {
  return a*(a+1)*(2*a+1)/6 - b*(b+1)*(2*b+1)/6;
}

int main(int argc, char** argv) {
  if (argc < 2) 
    exit(1);

  int x;
  if (1 != sscanf(*(argv + 1), "%i\n", &x))
    exit(1);

  int y = 0;
  if (argc == 3)
    if (1 != sscanf(*(argv + 2), "%i\n", &y))
      exit(1);

  printf("x=%d,y=%d,s=%d\n", x, y, calculate(x, y));

  return 0;
}