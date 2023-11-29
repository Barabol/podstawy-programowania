#include <stdio.h>
char *pobier(const char name[]) {
  static char input[] = {};
  int adres = 0;
  char identifier[3] = "://";
  int id = 0;
  char test = 0;
  printf("%s: ", name);
  for (int x = 0;; x++) {
    scanf("%c", &input[x]);
    if (x < 16 && test == 0) {
      if (input[x] == identifier[id]) {
        id++;
        if (id == 3) {
          test = 1;
          adres = x - 2;
        }
      } else
        id = 0;
    }
    if (input[x] == 10) {
      input[x] = 0;
      break;
    }
  }
  printf("Podano: %s\n", input);
  if (test == 0)
    puts("Protokół: brak");
  else {
    printf("Protokół: ");
    for (int x = 0; x < adres; x++) {
      printf("%c", input[x]);
    }
    printf("\n");
  }
  return &input[0];
}

int main() { pobier("Podaj link do strony"); }
