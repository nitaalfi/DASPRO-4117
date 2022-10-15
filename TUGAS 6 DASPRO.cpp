#include <iostream>

using namespace std;

int main()
{
    int x1 = 0, x2 = 1;
    cout << x1 << endl;

    for (int n = 0; n < 100; n++) {
        n = x2 + x1;
        cout << n << " " << endl;
        x2 = x1;
        x1 = n;

    }
    return 0;
}
