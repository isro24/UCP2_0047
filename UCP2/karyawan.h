#ifndef KARYAWAN_H
#define KARYAWAN_H

class karyawan {
public:
    string nama;
    karyawan(string nama) : nama(nama) {
        cout << "nama: \"" << nama << endl;
    }
    karyawan(){
        cout << "nama: \"" << nama << endl;
    }
};
#endif