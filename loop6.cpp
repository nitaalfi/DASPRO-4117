#include <iostream>

using namespace std;

int main()
{

    /*Buatlah Program seperti nomer 5, tentukan nilai maximal dan minimal dari data yang di masukan oleh user,
    sebagai simulasi,  data yang anda masukan adalah sebagai berikut :  12, 31, 4,  22, 34,  50, 129, 33, 45, 32, 50, -99.
    Data terakhir (-99) tidak di hitung*/

    int l, maks, minim;
    for(int i = 0;; i++){
    cout << "Masukan Angka = ";
    cin >> l;
    if(l > maks){
        maks = l;
    }
    if(l < minim && l != -99){
        minim = l;
    }
    if(l == -99){
        cout << endl;
        cout << "angka Maksimal     = " << maks << endl;
        cout << "angka Minimal      = " << minim << endl;
        break;
        }
    }
    return 0;
