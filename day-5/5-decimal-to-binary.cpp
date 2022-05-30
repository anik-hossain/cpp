#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    int result = 0;
    int x = 1;

    while (x <= n)
        x *= 2;
    x /= 2;

    while (x > 0)
    {
        int lastDigit = n / x;
        n -= lastDigit * x;
        x /= 2;
        result = result * 10 + lastDigit;
    }
    return result;
}

int main()
{
    int n;
    cin >> n;

    cout << decimalToBinary(n) << endl;

    return 0;
}
