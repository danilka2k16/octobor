#include <iostream>

using namespace std;

int main () {
   int n, a;
    cin >> n;
    a = n;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) {
            while (n % i == 0) n/= i;
            a=a-a/i;
        }
    if (n > 1) a=a-a/n;
    cout << a;
    return 0;
}
