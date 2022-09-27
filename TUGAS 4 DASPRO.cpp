#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    cout << "\t\t\ TUGAS 4 DASPRO \t\t" << endl;
    cout << "NAMA : NITA ALFIATUL JANNAH \t\t \nNIM : A11.2022.14643 "<< endl;
    cout << "SOAL \n1. bilangan genap antara 25 - 50. " << endl;
    cout << "\t ANSWER : " << endl;
    int a;
    cout << "\t masukan angka :  " ;
    cin >> a;
    if ( a > 25 && a < 50 && a % 2 == 0 ) {
    cout << "\t selamat bilangan anda sesuai!" << endl;
    }
    else {
    cout << "\t bilangan tidak sesuai " << endl;
    }
     cout << "2.bilangan ganjil antara lebih dari 13 atau kurang dari 5. " << endl;
    cout << "\t ANSWER : " << endl;
    int x;
    cout << "\t masukan angka :  " ;
    cin >> x;
    if ( x > 13 || x < 5 && x % 2 == 1 ) {
    cout << "\t selamat bilangan anda sesuai!" << endl;
    }
    else {
    cout << "\t bilangan tidak sesuai " << endl;
    }
     cout << "3. bilangan bulat antara 25-50 atau bilangan  ganjil antara 3-15. " << endl;
    cout << "\t ANSWER : " << endl;
    int y;
    cout << "\t masukan angka :  " ;
    cin >> y;
    if ( y > 25 && a < 50 || y > 3 && y < 15 && a % 2 == 0 ) {
    cout << "\t selamat bilangan anda sesuai!" << endl;
    }
    else {
    cout << "\t bilangan tidak sesuai " << endl;
    }
    int jurusan;
    cout<< "==jurusan==\n1. Teknik Infomatika \n2. Sistem Informasi \n3. DKV"<< endl;
    cout<< "masukan jurusan anda : ";
    cin >> jurusan;
        if (jurusan ==1){
            cout << "jurusan anda adalah teknik informatika" << endl;
        }
    else if (jurusan == 2 ||  3){
            cout << "jurusan anda salah"<<endl;
    }
    return 0;
}
