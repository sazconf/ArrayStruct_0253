#include<iostream>

using namespace std;

string nama[] = {"joko", "bejo", "yanto"};
float kecepatan[3] = {75.3, 83.7, 99.9};
int waqtu[4];  // Correct size for the array to hold 4 elements

int main() {

    cout << "Data ke-2: " << nama[1] << endl;
    nama[1] = "gibran";
    cout << "Data ke-2 setelah diubah: " << nama[1] << endl;

    // Loop to print speed
    for (int i = 0; i < 3; i++) {
        cout << "Kecepatan ke-" << i + 1 << " : " << kecepatan[i] << endl;
    }

    // Fix: Proper initialization of the loop counter 'i'
    for (int i = 0; i < 4; i++) {
        cout << "Masukkan waktu ke-" << i + 1 << " : ";
        cin >> waqtu[i];
    }

    cout << endl;
    cout << "Show the time: " << endl;

    // Loop to print time
    for (int i = 0; i < 4; i++) {
        cout << "Waktu ke-" << i + 1 << " : " << waqtu[i] << endl;
    }

    return 0;
}
