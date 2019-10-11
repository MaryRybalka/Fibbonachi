#include <iostream>
#include "lib.h"

using namespace std;

int main() {
    int n;
    cin >> n;

    int res = fib(n);

    if (res == -1) {
        cout << "n must be greater than or equal 0" << endl;
    } else {
        cout << res << endl;
    }
    return 0;
}