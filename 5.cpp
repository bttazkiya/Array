//mengisi elemen ke-4 dengan karakter "Z"tt
#include <iostream>
using namespace std;
int main() {
    char letters [10];//deklarasi array
    //mengisi elemen ke-4 dengan karakter "Z"tt
    letters[3] = 'Z';
    //menampilkan isi array
    for (int i = 0; i < 10; i++){
        cout << "Elemen ke-" << i + 1 << ":" << letters[i] << endl;
    }
    return 0;
}
//mengisi elemen ke-4 dengan karakter "Z" (beda kodingan)
#include <iostream>
using namespace std;
int main() {
    char letters [10] = {'a','b','c','d','Z','f','g','h','i','j'};
    int i;
    cout << "Letters : " << letters << endl;
    cout << "Z berada di Elemen ke- " ;
    for (int i = 0; i < 10; i++) {
         if (letters [i] == 'Z'){
             cout << i << endl;}
    }
    return 0;
}