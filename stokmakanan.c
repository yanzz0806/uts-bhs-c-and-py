#include <stdio.h>

int main() {
    char nama[50];
    int stok_awal, stok_masuk, stok_keluar;
    int stok_bertambah, stok_akhir;
    float harga, total_harga, rata_rata_harga;

    printf("=== APLIKASI STOK MAKANAN ===\n");

    printf("Nama makanan: ");
    scanf(" %[^\n]", nama);

    printf("Stok awal: ");
    scanf("%d", &stok_awal);

    printf("Stok masuk: ");
    scanf("%d", &stok_masuk);

    printf("Stok keluar: ");
    scanf("%d", &stok_keluar);

    printf("Harga makanan: ");
    scanf("%f", &harga);

    // +
    stok_bertambah = stok_awal + stok_masuk;

    // -
    stok_akhir = stok_bertambah - stok_keluar;

    // *
    total_harga = stok_akhir * harga;

    // /
    rata_rata_harga = total_harga / stok_akhir;

    printf("\n=== HASIL DATA ===\n");
    printf("Nama makanan    : %s\n", nama);
    printf("Stok akhir      : %d\n", stok_akhir);
    printf("Total harga     : %.2f\n", total_harga);
    printf("Rata-rata harga : %.2f\n", rata_rata_harga);

    return 0;
}
