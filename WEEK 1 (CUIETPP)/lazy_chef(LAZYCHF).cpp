#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false); // ignore this
    int T;
    cin >> T;
    // cin.ignore(); must be there when using getline(cin, s)
    while (T--)
    {
        int x, m, d;
        cin >> x >> m >> d;
        if (x * m <= x + d)
        {
            cout << x * m << endl;
        }
        else
        {
            cout << x + d << endl;
        }
    }
    return 0;
}

// contributed by apkharsh