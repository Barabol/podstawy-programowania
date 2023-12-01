#include <stdio.h>
void wyswietl(char wyraz[10][35]) {
  for (int x = 0; x < 10; x++) {
    printf("%i] %s\n", x + 1, wyraz[x]);
  }
}
void pobier(char wyraz[10][35]) {
  for (int x = 0; x < 10; x++) {
    for (int y = 0;; y++) {
      scanf("%c", &wyraz[x][y]);
      if (wyraz[x][y] == 10 || wyraz[x][y] == 32) {
        wyraz[x][y] = 0;
        break;
      }
    }
  }
}
int najdlozsze(char wyraz[10][35]) {
  int max[2] = {0, 0};

  for (int x = 0; x < 10; x++) {
    for (int y = 0;; y++) {
      if (wyraz[x][y] == 0) {
        if (y > max[0]) {
          max[0] = y;
          max[1] = x;
        }
        break;
      }
    }
  }
  return max[1];
}
int main() {
  char slowa[10][35] = {};
  pobier(slowa);
  int kk = najdlozsze(slowa);
  printf("Najdłuższe słowo to: %s\n", slowa[kk]);
  // wyswietl(slowa);
  // printf("< %i >\n", kk);
}
