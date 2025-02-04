// Buat Jadwal kegiatan harian mahasiswa
#include <iostream>
using namespace std;
int main() {
    string jadwal[3][4];
    string hari[3] ={"Senin", "Selasa", "Rabu"};
    
    for(int i = 0; i < 3; i++){
        cout << "Hari = " << hari[i] << endl;
        for(int j = 0; j < 4; j++){
            cout << "Masukkan Kegitan = " << (j*2+8) << ":00 - " << (j*2+10) << ":00: ";
            cin >> jadwal[i][j];
        }
    }
    cout << "\n=== JADWAL HARIAN MAHASISWA ===\n" << endl;
    for(int i = 0;i < 3; i++){
        cout << "Masukkan Hari = " << hari[i] << endl;
        for(int j = 0; j < 4; j++){
            cout << "Masukkan Kegitan = " << (j*2+8) << ":00 - " << (j*2+10) << ":00|" << jadwal[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}
// menyimpan nilai mahasiswa dari 3 mata kuliah
#include <iostream>
using namespace std;
int main() {
    string nama;
    float nilai [3][3];
    float rata_rata[3];

    for(int i = 0; i < 3; i++){
        cout << "Masukkan Nama Mahasiswa ke- " << i + 1 << ": ";
        cin >> nama;
        for(int j = 0; j < 3; j++){
            cout << "Masukkan Nilai Mata Kuliah" << j + 1 << " untuk " << nama <<": ";
            cin >> nilai[i][j];
        }
    }
    cout << "\n === Hasil Nilai Mahasisa === \n";
    for(int i = 0; i < 3; i++){
        float sum = 0;
        for(int j = 0; j < 3; j++){
            sum += nilai[i][j];
        }
        rata_rata[i] = sum / 3;
        cout << "Rata-rata nilai mahasiswa ke-" << i + 1 << ": " << rata_rata[i] << endl;
    }
    return 0;
}
// program untuk menyimpan harga barang di minimarket. Minimarket memilih 3 
// kategori barang (Makanan, Minuman, Alat Tulis). Setiap kategori memiliki 2 barang. 
// Program harus menampilkan harga barang yang dipilih oleh user.
#include <iostream> 
using namespace std; 
 
int main() { 
    const char* kategori[] = {"Makanan", "Minuman", "Alat Tulis"}; 
    const char* produk[3][2] = { 
        {"Roti", "Biskuit"},           // Makanan 
        {"Air Mineral", "Teh Manis"}, // Minuman 
        {"Pulpen", "Buku"}            // Alat Tulis 
    }; 
 
    // Deklarasi harga produk 
    int harga[3][2] = { 
        {15000, 10000}, // Harga Makanan 
        {5000, 10000},  // Harga Minuman 
        {3000, 8000}    // Harga Alat Tulis 
    }; 
 
    int pilihanKategori, pilihanProduk; 
    char lanjut; 
 
    // Array untuk menyimpan produk dan harga yang dipilih 
    const char* produkDipilih[100]; // Maksimal 100 produk yang bisa dipilih 
    int hargaDipilih[100]; 
    int jumlahDipilih = 0;          // Counter untuk jumlah produk yang dipilih 
 
    cout << "=== Daftar Produk di Minimarket ===\n"; 
    for (int i = 0; i < 3; i++) { 
        cout << kategori[i] << ":\n"; 
        for (int j = 0; j < 2; j++) { 
            cout << "  " << j + 1 << ". " << produk[i][j] << " : Rp " << harga[i][j] << "\n"; 
        } 
    } 
 
    do { 
        // Loop untuk memilih kategori 
        while (true) { 
            cout << "\nPilih Kategori Produk (1: Makanan, 2: Minuman, 3: Alat Tulis): "; 
            cin >> pilihanKategori; 
 
            if (pilihanKategori >= 1 && pilihanKategori <= 3) { 
                break; 
            } 
            cout << "Kategori tidak valid! Silakan coba lagi.\n"; 
        } 
 
        // Loop untuk memilih produk 
        while (true) { 
            cout << "Pilih Produk (1 atau 2): "; 
            cin >> pilihanProduk; 
 
            if (pilihanProduk >= 1 && pilihanProduk <= 2) { 
                break;  
            } 
            cout << "Produk tidak valid! Silakan coba lagi.\n"; 
        } 
 
        // Menyimpan produk dan harga yang dipilih 
        produkDipilih[jumlahDipilih] = produk[pilihanKategori - 1][pilihanProduk - 1]; 
        hargaDipilih[jumlahDipilih] = harga[pilihanKategori - 1][pilihanProduk - 1]; 
        jumlahDipilih++; 
 
        // Tanya apakah user ingin memilih lagi 
        cout << "\nApakah Anda ingin memilih produk lagi? (y/t): "; 
        cin >> lanjut; 
 
    } while (lanjut == 'y' || lanjut == 'Y'); 
 
    // Menampilkan semua produk dan harga yang dipilih 
    cout << "\n=== Produk yang Anda Pilih ===\n"; 
    int totalHarga = 0; 
    for (int i = 0; i < jumlahDipilih; i++) { 
        cout << i + 1 << ". " << produkDipilih[i] << " : Rp " << hargaDipilih[i] << "\n"; 
        totalHarga += hargaDipilih[i]; 
    } 
 
    cout << "Total Harga : Rp " << totalHarga << "\n"; 
    cout << "\nTerima Kasih Telah Berbelanja!\n"; 
 
    return 0; 
}
// //program untuk memesan kursi di bioskop. Bioskop memiliki 3 baris, setiap baris 
// memiliki 4 kursi. Kursi kosong ditandai dengan angka 0, sedangkan kursi yang terisi 
// ditandai dengan 1. User dapat memilih kursi yang ingin dipesan. Setelah dipilih program 
// akan memperbaharui tampilan kursi. 
#include <iostream> 
using namespace std; 
 
void tampilkanKursi(int kursi[3][4]) { 
    cout << "Tampilan Kursi Bioskop :\n"; 
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 4; j++) { 
            cout << kursi[i][j] << " "; 
        } 
        cout << endl; 
    } 
} 
 
// Fungsi untuk memesan kursi 
void pesanKursi(int kursi[3][4]) { 
    int baris, kolom; 
 
    cout << "\nMasukkan Baris Kursi (0-2) : "; 
    cin >> baris; 
 
    cout << "Masukkan Kolom Kursi (0-3) : "; 
    cin >> kolom; 
 
    // Validasi input dan cek apakah kursi kosong 
    if (baris < 0 || baris >= 3 || kolom < 0 || kolom >= 4) { 
        cout << "Posisi kursi tidak valid! Silakan coba lagi.\n"; 
    } else if (kursi[baris][kolom] == 1) { 
        cout << "Kursi sudah terisi! Silakan pilih kursi lain.\n"; 
    } else { 
        kursi[baris][kolom] = 1;  
        cout << "Kursi Berhasil Dipesan.\n"; 
    } 
} 
 
int main() { 
    int kursi[3][4] = { {0, 0, 0, 0},  
                        {0, 0, 0, 0},  
                        {0, 0, 0, 0} }; // Array untuk merepresentasikan kursi 
     
    char pilihan; 
 
    do { 
        tampilkanKursi(kursi); // Tampilkan status kursi 
        pesanKursi(kursi);    // Pesan kursi 
 
        cout << "\nApakah Anda ingin memesan kursi lagi? (y/t): "; 
        cin >> pilihan; 
    } while (pilihan == 'y' || pilihan == 'Y'); 
 
    // Menampilkan status kursi setelah selesai pemesanan 
    cout << "\nStatus Kursi Setelah Pemesanan:\n"; 
    tampilkanKursi(kursi); 
 
    cout << "\nTerima Kasih Telah Memesan Kursi Di Bioskop Kami.\n"; 
    return 0; 
} 