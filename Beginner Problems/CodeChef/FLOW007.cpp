#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int rem = 0;
        while (n > 0)
        {
            rem *= 10;
            long long int k = n % 10;
            rem += k;
            n /= 10;
        }
        cout << rem << endl;
    }
}
