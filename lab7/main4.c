#include <stdio.h>
#define MAX_LEN 200
void wypiszOdw(char *zd) {
  printf("\033[5m");
  const char Separator = ' ';
  for (int x = MAX_LEN; x > -1; x--) {
    if (*(zd + x) == Separator) {
      for (int y = 0;; y++) {
        if (y != 0 && (*(zd + x + y) == 0 || *(zd + x + y) == Separator))
          break;
        printf("%c", *(zd + x + y));
      }
    }
  }
  printf("\n\033[0m");
}
void zadanie() {
  printf("Podaj zdanie: ");
  char zd[MAX_LEN];
  for (int x = 0; x < MAX_LEN; x++)
    zd[x] = 0;
  char EldenRing = 0;
  zd[0] = 32;
  for (int x = 1; x < MAX_LEN; x++) {
    scanf("%c", &EldenRing);
    if (EldenRing == 10)
      break;
    zd[x] = EldenRing;
  }
  // printf("%s\n", zd);
  wypiszOdw(&zd[0]);
}

int main() { zadanie(); }
