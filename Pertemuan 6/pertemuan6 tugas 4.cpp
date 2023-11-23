#include <stdio.h>

int main() {
    // Kecepatan dalam meter/detik
    int kecepatan = 2;

    // Waktu dalam detik
    int waktu = 100;

    // Menghitung jarak: jarak = kecepatan * waktu
    int jarak = kecepatan * waktu;

    // Menampilkan hasil
    printf("Jarak yang ditempuh setelah %d detik adalah %d meter.\n", waktu, jarak);

    return 0;
}
