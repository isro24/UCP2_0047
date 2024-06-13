#include <iostream>
#include<vector>
using namespace std;

#include "karyawan.h"
#include "perusahaan.h"

class karyawan;
class proyek {
public:
    string nama;
    vector<karyawan*> daftar_karyawan;

    proyek(string nama) : nama(nama) {
        cout << nama << endl;
    }

    void tambahproyek(karyawan* karyawan) {
        daftar_karyawan.push_back(karyawan);
    }
    void cetakproyek() {
        cout << "Daftar proyek karyawan \"" << this->nama << "\":\n";
        for (auto& a : daftar_karyawan) {
            cout << a->nama << "n/";
        }
        cout << endl;
    }
};

class karyawan {
public:
    string nama;
    vector<proyek*> daftar_proyek;

    karyawan(string nama) : nama(nama) {
        cout << nama << endl;
    }

    void tambahkaryawan(proyek* proyek) {
        daftar_proyek.push_back(proyek);
    }
    void cetakkaryawan() {
        cout << "Daftar karyawan proyek \"" << this->nama << "\":\n";
        for (auto& a : daftar_proyek) {
            cout << a->nama << "n/";
        }
        cout << endl;
    }
};

int main() {
    karyawan* karyawan1 = new karyawan("Budi");
    karyawan* karyawan2 = new karyawan("Andi");
    proyek* proyek1 = new proyek("Sistem Informasi");
    proyek* proyek2 = new proyek("Sistem Keamanan");
    perusahaan* perusahaan1 = new perusahaan("PT. Maju Mundur");

    proyek1->tambahproyek(karyawan1);
    proyek2->tambahproyek(karyawan2);
    karyawan1->tambahkaryawan(proyek1);
    karyawan2->tambahkaryawan(proyek2);

    proyek1->cetakproyek();
    proyek2->cetakproyek();
    karyawan1->cetakkaryawan();
    karyawan2->cetakkaryawan();
}





