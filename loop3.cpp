#include <iostream>

using namespace std;

int main()
{
    /*Buatlah Program untuk mencetak angka integer dari 100 hingga 1 menggunakan loop for,
    dan akan berhenti (break) bila mencapai angka 55.*/

    for(int z = 100; z > 0; z--){
        if(z == 54){
            break;
        }
        cout << "    angka integer z = " << z << endl;
    }
    return 0;
