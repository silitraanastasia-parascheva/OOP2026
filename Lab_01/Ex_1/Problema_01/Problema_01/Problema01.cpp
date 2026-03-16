#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int transformare(char s[]) {
    int i = 0;
    int numar = 0;

    while (s[i] != '\0' && s[i] != '\n') {
        numar = numar * 10 + (s[i] - '0');
        i++;
    }

    return numar;
}

int main() {
    FILE* f;
    char linie[100];
    int suma = 0;

    fopen_s(&f, "in.txt", "r");

    if (f == NULL) {
        printf("Fisierul nu a fost gasit!\n");
        return 1;
    }

    while (fgets(linie, 100, f) != NULL) {
        suma = suma + transformare(linie);
    }

    fclose(f);

    printf("Suma este: %d\n", suma);

    return 0;
}