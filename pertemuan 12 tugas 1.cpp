#include <iostream>
using namespace std;

int main() {
    // Program for checking if there are repeated letters in the array A[8]
    char A[8] = {'A', 'J', 'A', 'K', 'A', 'R', 'T', 'A'};
    bool hasDuplicate = false;

    for (int i = 0; i < 7; ++i) {
        for (int j = i + 1; j < 8; ++j) {
            if (A[i] == A[j]) {
                hasDuplicate = true;
                cout << "ADA " << A[i] << endl;
                break;
            }
        }
        if (hasDuplicate) {
            break;
        }
    }

    if (!hasDuplicate) {
        cout << "TIDAK ADA" << endl;
    }

    // Program for finding the most frequent letter in the array A[11]
    char B[11] = {'A', 'J', 'O', 'G', 'J', 'A', 'K', 'A', 'R', 'T', 'A'};
    int frequency[26] = {0}; // Assuming only capital letters

    for (int i = 0; i < 11; ++i) {
        int index = B[i] - 'A';
        frequency[index]++;
    }

    char mostFrequentChar;
    int maxFrequency = 0;

    for (int i = 0; i < 26; ++i) {
        if (frequency[i] > maxFrequency) {
            maxFrequency = frequency[i];
            mostFrequentChar = 'A' + i;
        }
    }

    cout << "Huruf yang terbanyak: " << mostFrequentChar << " (Jumlah: " << maxFrequency << ")" << endl;

    return 0;
}
