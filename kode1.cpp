#include <iostream>
using namespace std;
void cetakData(string nama, string nisn, string jurusan, float tinggiBadan) {
    cout << "Nama: " << nama << endl;
    cout << "NISN: " << nisn << endl;
    cout << "Jurusan: " << jurusan << endl;
    cout << "Tinggi Badan: " << tinggiBadan << " cm" << endl;
}

int main() {
    string nama, nisn, jurusan;
    float tinggiBadan;

    cout << "Masukkan nama siswa: ";
    getline(cin, nama);

    cout << "Masukkan NISN siswa: ";
    cin >> nisn;

    cout << "Masukkan jurusan siswa: ";
    cin.ignore(); // Membersihkan buffer input
    getline(cin, jurusan);

    cout << "Masukkan tinggi badan siswa (cm): ";
    cin >> tinggiBadan;

    cetakData(nama, nisn, jurusan, tinggiBadan);

    return 0;
}