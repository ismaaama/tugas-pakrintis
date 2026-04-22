#include <stdio.h>

int main() {
    int i, j;

    printf("Tabel Perkalian Lengkap:\n\n");

    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= 10; j++) {
            printf("%2d x %2d = %3d   ", i, j, i * j);
        }
        printf("\n\n");
    }

    return 0;
}