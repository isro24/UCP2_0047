#ifndef PERUSAHAAN_H
#define PERUSAHAAN_H

class perusahaan {
public:
    string nama;
    vector<karyawan*> daftar_karyawan;
    perusahaan(string nama) : nama(nama) {
        cout <<  nama << endl;
    }
    ~perusahaan() {
        cout << nama << endl;
    }

    void tambahhkaryawan(karyawan* karyawan) {
        daftar_karyawan.push_back(karyawan);
    }
    void cetakkaryawan() {
        cout << "Daftar proyek karyawan \"" << this->nama << "\":\n";
        for (auto& a : daftar_karyawan) {
            cout << a->nama << "n/";
        }
        cout << endl;
    }

};
#endif;