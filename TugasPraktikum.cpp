#include <iostream>
using namespace std;

class Kendaraan {
private: //atribut private berupa id kendaraan dan nama
    int id;
    string nama;

public:
    // 1. Constructor tanpa parameter (default)
    Kendaraan() {
        id = 2557;
        nama = "Pesawat";
    }

    // 2. Constructor dengan parameter id saja
    Kendaraan(int i) {
        id = i;
        nama = "Kapal";
    }

    // 3. Constructor dengan parameter nama saja
    Kendaraan(string n) {
        id = 1223;
        nama = n;
    }

    // 4. Constructor dengan parameter lengkap
    Kendaraan(int i, string n) {
        id = i;
        nama = n;
    }

    // Method untuk menampilkan data kendaraan
    void tampilkan() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    // Membuat objek dengan berbagai constructor
    Kendaraan k1;                  // default
    Kendaraan k2(2312);             // hanya id
    Kendaraan k3("Motor");         // hanya nama
    Kendaraan k4(302, "Mobil");    // lengkap

    // Menampilkan data
    cout << "Data Kendaraan:\n";
    k1.tampilkan();
    k2.tampilkan();
    k3.tampilkan();
    k4.tampilkan();

    return 0;
}