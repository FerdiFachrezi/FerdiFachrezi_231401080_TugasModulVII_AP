#include <iostream>
using namespace std;

void tambah(float *a, float *b, float *hasil) {
    *hasil = *a + *b;
}

void kurang(float *a, float *b, float *hasil) {
    *hasil = *a - *b;
}

void kali(float *a, float *b, float *hasil) {
    *hasil = *a * *b;
}

void bagi(float *a, float *b, float *hasil) {
    *hasil = *a / *b;
}

    int main() {
    float num1, num2;
    cout << "Masukkan dua bilangan: \n";
    cin >> num1 >> num2;

    float tamba, kuran, kal, bag;

    tambah(&num1, &num2, &tamba);
    kurang(&num1, &num2, &kuran);
    kali(&num1, &num2, &kal);
    bagi(&num1, &num2, &bag);
    
    cout << "Bilangan Pertama: " << num1 << endl;
    cout << "Bilangan Kedua: " << num2 << endl;
    cout << "Hasil penambahan: " << tamba << endl;
    cout << "Hasil pengurangan: " << kuran << endl;
    cout << "Hasil perkalian: " << kal << endl;
    cout << "Hasil pembagian: " << bag << endl;

    return 0;
}