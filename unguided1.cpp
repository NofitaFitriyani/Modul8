#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

void Selection_Sort(char arr[], int n) {
    int i, j, min_idx;
    char temp;
    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

bool BinarySearch(char arr[], int n, char cari, int &index) {
    int awal = 0, akhir = n - 1, tengah;
    while (awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (arr[tengah] == cari) {
            index = tengah;
            return true;
        } else if (arr[tengah] < cari) {
            awal = tengah + 1;
        } else {
            akhir = tengah - 1;
        }
    }
    return false;
}

int main() {
    string kalimat;
    char cari;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> cari;

    int n = kalimat.length();
    char arr[n + 1];
    strcpy(arr, kalimat.c_str());

    Selection_Sort(arr, n);

    cout << "\nKalimat setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
    }
    cout << endl;

    int index;
    if (BinarySearch(arr, n, cari, index)) {
        cout << "\nHuruf '" << cari << "' ditemukan pada indeks ke-" << index << " setelah pengurutan." << endl;
    } else {
        cout << "\nHuruf '" << cari << "' tidak ditemukan." << endl;
    }

    return 0;
}
