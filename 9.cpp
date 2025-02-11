//Menghitung Perkalian 2 matriks
#include <iostream>
using namespace std;
int main() {
    int baris, kolom;
    int A[2][2] = {{1, 2}, {3, 4}};
    int C[2][2];
    cout << "Matriks A: " << endl;
    for (baris = 0; baris < 2; baris++){
        for (kolom = 0; kolom < 2; kolom++){
            cout << A[baris][kolom] << " ";
        }
        cout << endl;
    }
    cout << "Matriks C = A X 5: " << endl;
    for (baris = 0; baris < 2; baris++){
        for (kolom = 0; kolom < 2; kolom++){
            C[baris][kolom] = A[baris][kolom] * 5;
            cout << C[baris][kolom] << " ";
        }
        cout << endl; 
    }   
    return 0;
}