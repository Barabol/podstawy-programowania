#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void wypelnij(int tabela[4][3]) {
  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 3; y++) {
      tabela[x][y] = (rand() % 23 - 11);
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
void dodajSkalar(int tabela[4][3], int skalar) {
  for (int x = 0; x < 4; x++) {
    for (int y = 0; y < 3; y++) {
      tabela[x][y] += skalar;
    }
  }
}
void pobier(int *zmienna, char tekst[]) {
  printf("%s", tekst);
  scanf("%i", zmienna);
}
int main() {
  srand(time(NULL));
  int tabela[4][3], skalar;
  wypelnij(tabela);
  wyswietl(tabela);
  pobier(&skalar, "Podaj liczbę jaką chcesz dodać do powyższej macierzy: ");
  dodajSkalar(tabela, skalar);
  wyswietl(tabela);
}
