#include <iostream>

using namespace std;

int main()
{

    /*Buatlah Program untuk membaca suatu inputan nilai integer dan selama data yang di inputkan bukan -99,
    maka program akan terus meminta user untuk melakukan inputan*/

    int G;
    for(int G = 0;; G++){
        cout << "Masukan Angka anda = ";
        cin >> G;
        if(G == -99){
            cout << "\nSTOP ANDA MEMASUKAN ANGKA LARANGAN" << endl;
            break;
        }
    }
    return 0;
