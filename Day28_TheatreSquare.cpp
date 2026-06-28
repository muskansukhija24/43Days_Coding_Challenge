#include <iostream>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long x = (n + a - 1) / a; // tiles needed along length
    long long y = (m + a - 1) / a; // tiles needed along width

    cout << x * y;

    return 0;
}
