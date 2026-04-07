#include <iostream>
#include <string>

using namespace std;

// Poin Plus: Implementasi pointer pada struct
struct Mahasiswa {
    string namaMahasiswa;
    string nimMahasiswa;
    int nilaiTugas;
};

// Wajib: Penggunaan Dereference Operator (*) sebagai parameter fungsi
void updateNilai(Mahasiswa *ptrMhs, int nilaiBaru) {
    // Mengakses data menggunakan dereference (*)
    (*ptrMhs).nilaiTugas = nilaiBaru;
}

// Wajib: Penggunaan Address-of Operator (&) sebagai parameter fungsi (Reference)
void tampilkanData(const Mahasiswa &refMhs) {
    cout << "\n--- DATA MAHASISWA TERBARU ---" << endl;
    cout << "Nama  : " << refMhs.namaMahasiswa << endl;
    cout << "NIM   : " << refMhs.nimMahasiswa << endl;
    cout << "Nilai : " << refMhs.nilaiTugas << endl;
    cout << "------------------------------" << endl;
}

int main() {
    Mahasiswa mhs;
    int nilaiUpdate;

    cout << "=== Input Data Mahasiswa ===" << endl;
    cout << "Masukkan Nama: ";
    getline(cin, mhs.namaMahasiswa);
    cout << "Masukkan NIM : ";
    cin >> mhs.nimMahasiswa;
    cout << "Masukkan Nilai: ";
    cin >> mhs.nilaiTugas;

    // Menampilkan data sebelum diupdate
    tampilkanData(mhs);

    cout << "\nMasukkan Nilai Baru untuk Update: ";
    cin >> nilaiUpdate;

    // Wajib: Penggunaan Address-of Operator (&) saat memanggil fungsi berparameter pointer
    updateNilai(&mhs, nilaiUpdate);

    // Menampilkan data setelah diupdate
    tampilkanData(mhs);

    return 0;
}