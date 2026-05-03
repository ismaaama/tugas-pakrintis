#include <stdio.h>
#include <stdlib.h>

// Membuat struct mahasiswa
struct Mahasiswa {
    char nama[50];
    float nilai;
};

int main() {
    int n, i;
    float total = 0, rata;

    // Input jumlah mahasiswa
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &n);

    // Alokasi memori menggunakan pointer
    struct Mahasiswa *mhs;
    mhs = (struct Mahasiswa*) malloc(n * sizeof(struct Mahasiswa));

    // Input data mahasiswa
    for(i = 0; i < n; i++) {
        printf("\nMahasiswa ke-%d\n", i + 1);
        printf("Nama  : ");
        scanf(" %[^\n]", mhs[i].nama); // baca string dengan spasi
        printf("Nilai : ");
        scanf("%f", &mhs[i].nilai);

        total += mhs[i].nilai;
    }

    // Hitung rata-rata
    rata = total / n;

    // Output data
    printf("\n=== Data Mahasiswa ===\n");
    for(i = 0; i < n; i++) {
        printf("%d. %s - %.2f\n", i + 1, mhs[i].nama, mhs[i].nilai);
    }

    printf("\nRata-rata nilai: %.2f\n", rata);

    // Bebaskan memori
    free(mhs);

    return 0;
}