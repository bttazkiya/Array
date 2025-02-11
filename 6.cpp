//array bertipe char dengan panjang 10 dengan indeks ganjil
#include <iostream>
using namespace std;
int main() {
    char karakter[10] = {'a','b','c','d','e','f','g','h','i','j'}; // Deklarasi array karakter dengan panjang 10
    
    // Cetak karakter dengan indeks ganjil
    cout << "Karakter dengan indeks ganjil: " << endl;
    for (int i = 1; i < 10; i += 2) {
        cout << karakter[i] << endl;
    }
    cout << endl;

    return 0;
}