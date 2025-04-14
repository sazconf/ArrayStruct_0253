#include<iostream>
#include<string>

using namespace std;

struct Pengarang {
    string nama;
    string alamat;
};

struct buku {
    string judul;
    int jumlahHalaman;  // Changed from string to int
    Pengarang pengarang; // Nested structure
};

int main(){
    buku bk[2]; // Array of structures

    for (int i = 0; i < 2; i++) {
        cout << "Masukkan judul buku: ";
        getline(cin, bk[i].judul); // Use getline for string input
        cout << "Masukkan jumlah halaman: ";
        cin >> bk[i].jumlahHalaman;
        cin.ignore(); // Ignore the newline character left in the buffer
        cout << "Masukkan pengarang: ";
        getline(cin, bk[i].pengarang.nama); // Use getline for string input
        cout << "Masukkan alamat pengarang: ";
        getline(cin, bk[i].pengarang.alamat); // Use getline for string input
        cout << endl;
    }

    // Output all entered book data
    cout << endl;
    for (int i = 0; i < 2; i++) {
        cout << "Judul buku: " << bk[i].judul << endl;
        cout << "Jumlah halaman: " << bk[i].jumlahHalaman << endl;
        cout << "Pengarang: " << bk[i].pengarang.nama << endl;
        cout << "Alamat pengarang: " << bk[i].pengarang.alamat << endl; // Access nested structure
    }

    return 0;
}
