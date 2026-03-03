#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    char cuvinte[20][20];
    int i = 0, j = 0, k = 0;
    int n = 0;

    printf("Introdu propozitia:\n");
    fgets(text, 100, stdin);

    while (text[i] != '\0') {
        if (text[i] != ' ' && text[i] != '\n') {
            cuvinte[n][k++] = text[i];
        }
        else if (k > 0) {
            cuvinte[n][k] = '\0';
            n++;
            k = 0;
        }
        i++;
    }
    if (k > 0) { cuvinte[n][k] = '\0'; n++; }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            int l1 = strlen(cuvinte[i]);
            int l2 = strlen(cuvinte[j]);
            if (l1 < l2 || (l1 == l2 && strcmp(cuvinte[i], cuvinte[j]) > 0)) {
                char temp[20];
                strcpy(temp, cuvinte[i]);
                strcpy(cuvinte[i], cuvinte[j]);
                strcpy(cuvinte[j], temp);
            }
        }
    }
    printf("\nRezultat:\n");
    for (i = 0; i < n; i++)
        printf("%s\n", cuvinte[i]);

    printf("Apasa Enter pentru a iesi...");
    getchar();

    return 0;
}