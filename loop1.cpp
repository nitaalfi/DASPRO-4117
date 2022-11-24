#include <iostream>

using namespace std;

int main()
{
        /*Buatlah Program untuk mencetak angka integer dari 100 hingga 1 dan sebaliknya menggunakan
    satu loop for multi expression di dalamnya*/
    int p = 100;
    for(int k = 1; k <= 100; k++){
        cout << "       p = " << p << " & " <<      "k = " << k << endl;
        p--;
    }
    return 0;
