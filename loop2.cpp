#include <iostream>

using namespace std;

int main()
{
    /*Buatlah Program untuk mencetak angka integer dari 100 hingga 1, tetapi yang genap
    saja dengan menggunakan statement continue*/
    for(int m = 100; m > 0; m--){
        if(m % 2 == 1){
            continue;
        }
        cout << "      angka genap adalah = " << m << endl;
    }
    return 0;
