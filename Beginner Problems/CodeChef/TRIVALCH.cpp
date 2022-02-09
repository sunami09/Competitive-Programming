#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool check = true;
    if (a + b < c || b + c < a || c + a < b)
    {
        check = false;
    }
    if (check)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
