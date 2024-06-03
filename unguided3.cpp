#include <iostream>

using namespace std;

int hitungAngka(int data[], int n, int cari) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (data[i] == cari) {
            count++;
        }
    }
    return count;
}

int main() {
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int n = sizeof(data) / sizeof(data[0]);
    int cari = 4;

    int jumlah = hitungAngka(data, n, cari);

    cout << "Data: {9, 4, 1, 4, 7, 10, 5, 4, 12, 4}" << endl;
    cout << "Jumlah angka " << cari << " dalam data adalah: " << jumlah << endl;

    return 0;
}
