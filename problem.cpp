#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n / 2 == 1) return true;
    if (n % 2 != 0) return false;
    return isPowerOfTwo(n / 2);
}

int main() {

    cout << isPowerOfTwo(8) << endl;

    return 0;
}
