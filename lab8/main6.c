#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void wypelnij(int tabela[5][5]) {
  for (int x = 0; x < 5; x++) {
    for (int y = 0; y < 5; y++) {
      tabela[x][y] = (rand() & 15);
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
void zadanie(int tabela[5][5]) {
  int helper;
  for (int x = 0; x < 3; x++) {
    helper = tabela[x][x];
    tabela[x][x] = tabela[4 - x][4 - x];
    tabela[4 - x][4 - x] = helper;
  }
}
int main() {
  srand(time(NULL));
  int tabela[5][5];
  wypelnij(tabela);
  wyswietl(tabela);
  zadanie(tabela);
  puts("Po zmianie");
  wyswietl(tabela);
}
