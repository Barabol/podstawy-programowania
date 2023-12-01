#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void wypelnij(int tabela[4][4]) {
  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 4; y++) {
      tabela[x][y] = (rand() % 21 - 10);
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
void sort(int tabela[4][4]) {
  int buffor;
  for (int y = 0; y < 15; y++) {
    for (int x = 0; x < 15; x++) {
      if (*((&(tabela[0][0])) + x) > *((&(tabela[0][0])) + x + 1)) {
        buffor = *((&(tabela[0][0])) + x);
        *((&(tabela[0][0])) + x) = *((&(tabela[0][0])) + x + 1);
        *((&(tabela[0][0])) + x + 1) = buffor;
      }
    }
  }
}
int main() {
  srand(time(NULL));
  int tabela[4][4];
  wypelnij(tabela);
  wyswietl(tabela);
  puts("Posortowana: ");
  sort(tabela);
  wyswietl(tabela);
}
