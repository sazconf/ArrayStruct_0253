#include<iostream>
using namespace std;

struct buku {
    string judul;
    string jumlahHalaman;
    int pengarang;
};

int main(){
    buku bk;

    cout << "Masukkan judul buku: ";
    cin >> bk.judul;
    cout << "Masukkan jumlah halaman: ";
    cin >> bk.jumlahHalaman;
    cout << "Masukkan pengarang: ";
    cin >> bk.pengarang;
    cout << endl;
    cout << "Judul buku: " << bk.judul << endl;
    cout << "Jumlah halaman: " << bk.jumlahHalaman << endl;
    cout << "Pengarang: " << bk.pengarang << endl;
}