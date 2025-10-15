#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilaiAkhir;
};

// fungsi untuk menghitung nilai akhir
float nilaiakhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    Mahasiswa mhs[10];
    int n;

    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        cout << "Nama  : ";
        cin >> mhs[i].nama;
        cout << "NIM   : ";
        cin >> mhs[i].nim;
        cout << "UTS   : ";
        cin >> mhs[i].uts;
        cout << "UAS   : ";
        cin >> mhs[i].uas;
        cout << "Tugas : ";
        cin >> mhs[i].tugas;

        mhs[i].nilaiAkhir = nilaiakhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "\n=== Daftar Nilai Mahasiswa ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << mhs[i].nama << " (" << mhs[i].nim << ") = " << mhs[i].nilaiAkhir << endl;
    }

    return 0;
}
