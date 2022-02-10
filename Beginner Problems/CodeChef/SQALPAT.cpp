/*Pattern
You're given a number N. Print the first N lines of the below-given pattern.

1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25
30 29 28 27 26
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int n;
    cin >> n;
    int countn = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 4; j >= -4; j = j - 2)
        {

            if (i % 2 != 0)
            {
                cout << countn + j << " ";
            }
            else
            {
                cout << countn << " ";
            }
            countn += 1;
        }
        cout << endl;
    }
    return 0;
}
