#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void wypelnij(int tabela[4][4]) {
  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 4; y++) {
      tabela[x][y] = (rand() % 41 - 20);
    }
  }
}
void wyswietl(const int tabela[4][4]) {
  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 4; y++) {
      printf(" %i |", tabela[x][y]);
    }
    printf("\n");
  }
}
void sumy(const int tabela[4][4]) {
  int sumaKolomn[4] = {0, 0, 0, 0};
  int sumaWierszy[4] = {0, 0, 0, 0};
  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 4; y++) {
      sumaKolomn[x] += tabela[y][x];
      sumaWierszy[x] += tabela[x][y];
    }
  }
  puts("Suma poszczególnych kolumn wynosi:");
  for (int x = 0; x < 4; x++) {
    printf("Dla kolumny #%i: %i\n", x + 1, sumaKolomn[x]);
  }
  puts("Suma poszczególnych wierszy wynosi:");
  for (int x = 0; x < 4; x++) {
    printf("Dla wiersza #%i: %i\n", x + 1, sumaWierszy[x]);
  }
}
int main() {
  int tabela[4][4];
  srand(time(NULL));
  wypelnij(tabela);
  wyswietl(tabela);
  sumy(tabela);
}
