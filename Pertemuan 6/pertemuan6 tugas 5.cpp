#include <stdio.h>

int main() {
    // Jumlah uang awal
    double uang = 1000000.0;

    // Persentase bunga per bulan
    double bunga = 0.02;

    // Menghitung jumlah uang setelah 10 bulan
    for (int i = 1; i <= 10; i++) {
        uang = uang + (uang * bunga);
    }

    // Menampilkan hasil
    printf("Jumlah uang setelah 10 bulan adalah: Rp. %.2lf\n", uang);

    return 0;
}
