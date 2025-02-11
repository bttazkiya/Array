//Menghitung nilai rata-rata elemen 10
#include <iostream>
using namespace std;
int main (){
    int arr[10];
    int sum = 0;
    int average;
    cout << "Masukkan 10 nilai: " << endl;
    for (int i = 0;i < 10;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    average = (int)sum /10;
    cout << "Rata-rata dari elemen array adalah: " << average << endl;
    return 0;
}