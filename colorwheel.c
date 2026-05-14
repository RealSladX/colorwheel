#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
  srand(time(NULL));
  char buf;
  char hex[6];
  printf("Hex:#");
  for (int i = 0; i < 6; i++){
    int r = rand() % 16;
    if (r == 10) hex[i] = 'a';
    else if (r == 11) hex[i] = 'b';
    else if (r == 12) hex[i] = 'c';
    else if (r == 13) hex[i] = 'd';
    else if (r == 14) hex[i] = 'e';
    else if (r == 15) hex[i] = 'f';
    else{
      snprintf(&hex[i], sizeof(&hex[i])+1, "%d", r);
    }
    printf("%c", hex[i]);
  }
  printf("\n");
  return 0;
}
