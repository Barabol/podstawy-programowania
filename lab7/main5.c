#include <stdio.h>
#include <strings.h>
char *pobier(const char name[], int *len) {
  static char input[] = {};
  printf("%s: ", name);
  for (int x = 0;; x++) {
    scanf("%c", &input[x]);
    if (input[x] == 10) {
      input[x] = 0;
      *len = x;
      break;
    }
  }
  return &input[0];
}
void wklej(char *a, const char *b) {
  for (int x = 0;; x++) {
    a[x] = b[x];
    if (b[x] == 0)
      break;
  }
}
void wypisz(const char *co, const char *naco, const char *zdanie) {
  // DA się wydajniej ale na co to komu?
  int len, index = 0, helper = 0;
  int list[50];
  for (int x = 0; x < 50; x++) {
    list[x] = -1;
  }
  for (int x = 0;; x++) {
    if (co[x] == 0) {
      len = x;
      break;
    }
  }
  for (long int x = 0;; x++) {
    if (zdanie[x] == 0) {
      index = 0;
      break;
    }
    if (zdanie[x] == co[index]) {
      index++;
      if (index == len) {
        list[helper] = x - len + 1;
        helper++;
        index = 0;
      }
    }
  }
  printf("Zdanie po zamianie: ");
  for (int x = 0;; x++) {
    if (zdanie[x] == 0) {
      printf("\n");
      return;
    }
    if (x == list[index]) {
      printf("%s", naco);
      x += len - 1;
      index++;
    }
    printf("%c", zdanie[x]);
  }
}
int main() {
  int len;
  char *helper = pobier("Podaj wyraz do zastąpienia", &len);
  char zaspepowane[len] = {};
  wklej(&zaspepowane[0], helper);
  helper = pobier("Podaj wyraz który ma zastąpić", &len);
  char zs[len] = {};
  wklej(&zs[0], helper);
  helper = pobier("Podaj zdanie", &len);
  char ciag[len] = {};
  wklej(&ciag[0], helper);
  wypisz(&zaspepowane[0], &zs[0], &ciag[0]);
}
