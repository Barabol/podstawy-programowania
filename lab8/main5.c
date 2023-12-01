#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void wypelnij(int tabela[5][5]) {
  for (int x = 0; x < 5; x++) {
    for (int y = 0; y < 5; y++) {
      tabela[x][y] = (rand() % 20 + 6);
    }
  }
}
void wyswietl(const int tabela[5][5]) {
  for (int x = 0; x < 5; x++) {
    for (int y = 0; y < 5; y++) {
      printf(" %i |", tabela[x][y]);
    }
    printf("\n");
  }
}
void zadanie(const int tabela[5][5]) {
  int rsum = 0;
  for (int x = 0; x < 5; x++) {
    rsum += tabela[x][x];
    rsum -= tabela[x][4 - x];
  }
  printf("Różnica sum wynosi: %i\n", rsum);
}
int main() {
  srand(time(NULL));
  int tabela[5][5];
  wypelnij(tabela);
  wyswietl(tabela);
  zadanie(tabela);
}
