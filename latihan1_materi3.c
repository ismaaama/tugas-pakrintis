#include <stdio.h>

int main() {
    int nilai;

    printf("Masukkan angka: ");
    scanf("%d", &nilai);

    if (nilai % 2 == 0) {
        printf("Angka %d adalah GENAP\n", nilai);
    } else {
        printf("Angka %d adalah GANJIL\n", nilai);
    }

    return 0;
}