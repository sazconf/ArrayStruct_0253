#include<iostream>
#include<string>

using namespace std;

struct buku {
    string judul;
    string jumlahHalaman;
    string pengarang;
};

int main(){
    buku bk[2]; // Array of structures

    for (int i=0; i<2; i++){

    

    cout << "Masukkan judul buku: ";
    cin >> bk[i].judul;
    cout << "Masukkan jumlah halaman: ";
    cin >> bk[i].jumlahHalaman;
    cout << "Masukkan pengarang: ";
    cin >> bk[i].pengarang;
    }


    cout << endl;

    for (int i=0; i<2; i++){
    cout << "Judul buku: " << bk[i].judul << endl;
    cout << "Jumlah halaman: " << bk[i].jumlahHalaman << endl;
    cout << "Pengarang: " << bk[i].pengarang << endl;
    }

}