#include <iostream>
#include <cctype>  

using namespace std;

// Fungsi untuk memeriksa apakah karakter adalah huruf vokal
bool cekVokal(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Fungsi untuk menghitung jumlah huruf vokal dalam string
int hitungVokal(const string& str) {
    int count = 0;
    for (char c : str) {
        if (cekVokal(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    string kalimat;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    // Hitung jumlah huruf vokal dalam kalimat
    int jumlahVokal = hitungVokal(kalimat);

    // Tampilkan jumlah huruf vokal
    cout << "Jumlah huruf vokal dalam kalimat: " << jumlahVokal << endl;

    return 0;
}
