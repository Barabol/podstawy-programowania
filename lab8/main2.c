#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void wypelnij(int tabela[4][3]) {
  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 3; y++) {
      tabela[x][y] = (rand() % 11 - 5);
    }
  }
}
void wyswietl(const int tabela[4][3]) {
  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 3; y++) {
      printf(" %i |", tabela[x][y]);
    }
    printf("\n");
  }
}
int max_value(const int tabela[4][3]) {
  int max = tabela[0][0];
  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 3; y++) {
      if (tabela[x][y] > max)
        max = tabela[x][y];
    }
  }
  return max;
}
int main() {
  srand(time(NULL));
  int tabela[4][3];
  wypelnij(tabela);
  wyswietl(tabela);
  printf("Największa wartość tej macierzy to: %i\n", max_value(tabela));
}
