#include <iostream>

using namespace std;

int main()
{
    /*Buatlah Program untuk mencetak rata-rata angka integer dari
    1 hingga 20 menggunakan loop for*/

    int total, rata;
    total = 0;
    for(int x = 1; x <= 20; x++){
        total = total + x;
        rata = total / x;
        cout << x << endl;
    }
    cout << "jumlah angka keseluruhan =     " << total << endl;
    cout << "rata-rata angka  = " << rata << endl;

    return 0;
