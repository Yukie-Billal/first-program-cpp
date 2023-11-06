#include <iostream>

using namespace std;

int square(int count) {
    return count * count;
}

int main() {
    cout << "Hello, World!" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Belajar c++ for loop" << endl;
    }
    string nama;
    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "\nHI " << nama << endl;
    cout << "Selamat datang di club\n";
    
    int firstNum, secondNum, numOperator;

    printf("\n============================ ");
    printf("\nList operator: ");
    printf("\n0. Tambah: ");
    printf("\n1. Kurang: ");
    printf("\n2. Kali: ");
    printf("\n3. Bagi: ");
    printf("\n============================ ");
    printf("\nMasukkan operator: ");
    cin >> numOperator;

    printf("\nMasukkan angka pertama: ");
    cin >> firstNum;
    printf("\nMasukkan angka kedua: ");
    cin >> secondNum;

    if (numOperator==0) {
        cout << "\nResult: " << firstNum+secondNum;
    }
    if (numOperator==1) {
        cout << "\nResult: " << firstNum-secondNum;
    }
    if (numOperator==2) {
        cout << "\nResult: " << firstNum*secondNum;
    }
    if (numOperator==3) {
        cout << "\nResult: " << firstNum/secondNum;
    }
    return 0;
}
