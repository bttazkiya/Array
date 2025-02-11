//contoh Array 2 dimensi
#include <iostream>
using namespace std;
int main() {
    int baris, kolom;
    int bil[2][5] = {
        {1, 2, 35, 7,10},
        {6, 7, 4, 1, 0}
    };
    for (baris = 0; baris < 2; baris++){
        for (kolom = 0; kolom < 5; kolom++){
            cout <<"Data [" << baris << "," << kolom << "] = "<< bil[baris][kolom] << endl;
        }
    }
    return 0;
}