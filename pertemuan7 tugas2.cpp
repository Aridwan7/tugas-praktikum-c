#include <stdio.h>

int main() {
    int A[11]; // Array satu dimensi
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int count = 0; // Jumlah elemen yang sudah diisi pada array A

    printf("Data dalam dokumen:\n");

    // Mencetak data satu persatu dan menyimpan nilai genap ke dalam array
    for (int i = 0; i < sizeof(data) / sizeof(data[0]); ++i) {
        printf("%d ", data[i]);

        if (data[i] % 2 == 0) {
            A[count] = data[i];
            count++;
        }
    }

    printf("\n\nIsi array setelah disimpan nilai genap:\n");

    // Mencetak isi array setelah disimpan nilai genap
    for (int i = 0; i < count; ++i) {
        printf("%d ", A[i]);
    }

    return 0;
}
