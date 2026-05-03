#include <stdio.h>
#include <stdlib.h>

// Struct karyawan
struct Karyawan {
    char nama[50];
    int umur;
    float gaji;
};

int main() {
    int n, i;

    printf("Masukkan jumlah karyawan: ");
    scanf("%d", &n);

    // Alokasi memori
    struct Karyawan *kry;
    kry = (struct Karyawan*) malloc(n * sizeof(struct Karyawan));

    // Input data
    for(i = 0; i < n; i++) {
        printf("\nKaryawan ke-%d\n", i + 1);
        printf("Nama  : ");
        scanf(" %[^\n]", kry[i].nama);
        printf("Umur  : ");
        scanf("%d", &kry[i].umur);
        printf("Gaji  : ");
        scanf("%f", &kry[i].gaji);
    }

    // Output data
    printf("\n=== Data Karyawan ===\n");
    for(i = 0; i < n; i++) {
        printf("%d. Nama: %s\n", i + 1, kry[i].nama);
        printf("   Umur: %d\n", kry[i].umur);
        printf("   Gaji: %.2f\n", kry[i].gaji);
    }

    // Bebaskan memori
    free(kry);

    return 0;
}