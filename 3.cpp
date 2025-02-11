// nilai maximum & minimum elemen 10
#include <iostream>
using namespace std;
int main (){
    int n, max, min;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    
    int arr[n];
    cout << "Masukkan " << n << " elemen array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Inisialisasi max dan min dengan elemen pertama
    max = arr[0];
    min = arr[0];

    // Mencari nilai max dan min
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    // Tampilkan hasil
    cout << "Nilai maksimum: " << max << endl;
    cout << "Nilai minimum: " << min << endl;
    return 0;
}