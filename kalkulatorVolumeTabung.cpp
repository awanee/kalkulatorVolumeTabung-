#include <iostream> // library c++ merakyat;

using namespace std; // biar tidak menulis [std::cout <<] karena nanti terlalu panjang kalo gak make ini;

int main() {
    cout << "+--------------------------+\n"; // judul program;
    cout << "| Kalkulator Volume Tabung |\n";
    cout << "+--------------------------+\n";

    const float phi = 3.14; // deklarasi variabel untuk rumus; 
    int jari, tinggi;
    float volume;

    cout << "Masukkan Nilai Jari-Jari: "; cin >> jari; // meminta user untuk menginputkan nilai; 
    cout << "Masukkan Nilai Tinggi Tabung; "; cin >> tinggi;

    volume = phi * (jari * jari) * tinggi; // rumus ditulis setelah program meminta user untuk menginputkan nilai;

    cout << "Volume Tabung: " << volume << endl; // menampilkan hasil    
}
